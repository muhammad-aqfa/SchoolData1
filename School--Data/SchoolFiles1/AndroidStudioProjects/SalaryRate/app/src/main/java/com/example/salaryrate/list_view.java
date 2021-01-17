package com.example.salaryrate;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.database.ChildEventListener;
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;

import java.io.Console;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;


public class list_view extends AppCompatActivity {
    private Button btnadd;
    private ListView lv;
    private double res = 0;
    TextView sumSalary;
    ArrayList<String> arrayList=new ArrayList<>();
    ArrayAdapter<String> arrayAdapter;
    DatabaseReference databaseReference;
    FirebaseAuth mAuth;
    String eachRow;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_list_view);
        lv=findViewById(R.id.list_view);
        mAuth = FirebaseAuth.getInstance();
        sumSalary = findViewById(R.id.sumSalary);
        databaseReference= FirebaseDatabase.getInstance().getReference("DateTime").child(mAuth.getUid()).child("Shifts");
        btnadd=findViewById(R.id.ADD);
        arrayAdapter=new ArrayAdapter<String>(this, android.R.layout.simple_list_item_1,arrayList);
        lv.setAdapter(arrayAdapter);
        //TextView email = findViewById(R.id.txtview);
        //email.setText(mAuth.getCurrentUser().getEmail());
        ValueEventListener eventListener = new ValueEventListener() {
            @Override
            public void onDataChange(DataSnapshot dataSnapshot) {
                for(DataSnapshot ds : dataSnapshot.getChildren()) {
                    String nameValue = ds.getValue(String.class);
                    arrayList.add(nameValue);
                }
                arrayAdapter.notifyDataSetChanged();
                for(int i=0;i<arrayList.size();i++){
                    eachRow = arrayList.get(i);
                    eachRow = eachRow.split("End: ")[1];
                    res += calcSalary(eachRow.split(" Start: ")[0],eachRow.split(" Start: ")[1]);
                }
                sumSalary.setText("" + res);
            }
            @Override
            public void onCancelled(DatabaseError databaseError) {}
        };
        databaseReference.addListenerForSingleValueEvent(eventListener);

        lv.setOnItemLongClickListener(new AdapterView.OnItemLongClickListener() {
            @Override
            public boolean onItemLongClick(AdapterView<?> parent, View view, int position, long id)
            {
                final int which_item=position;

                new AlertDialog.Builder(list_view.this)
                      .setTitle("Are you Sure ?")
                        .setMessage("Do you want to Delete this item")
                        .setPositiveButton("Yes", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialog, int which) {
                                arrayList.remove(which_item);
                                databaseReference.setValue(arrayList);
                                arrayAdapter.notifyDataSetChanged();
                            }
                        })
                        .setNegativeButton("No",null)
                        .show();
                return true;
            }
        });
                btnadd.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(list_view.this, mySalary.class);
                startActivity(intent);
                overridePendingTransition(R.anim.slide_to_right, R.anim.slide_out_left);
                Toast.makeText(list_view.this, "הוספת משמרית", Toast.LENGTH_LONG).show();
            }
        });
    }

    public double calcSalary(String end,String start){
        double res = 0;
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("dd/M/yyyy hh:mm");
        Date date1 = null;
        Date date2 = null;

        try {
            date1 = simpleDateFormat.parse(start);
            date2 = simpleDateFormat.parse(end);
        }catch (Exception e) {
            Toast.makeText(getApplicationContext(),e.getMessage(),Toast.LENGTH_LONG).show();
        }
        long res1 = date2.getTime() - date1.getTime();
        long secondsInMilli = 1000;
        long minutesInMilli = secondsInMilli * 60;
        long hoursInMilli = minutesInMilli * 60;
        res = ((double)res1 / hoursInMilli);

        //int salaryHour = ;
        SharedPreferences prefs = getSharedPreferences("pref", MODE_PRIVATE);
        int salaryHour = prefs.getInt("snumber4",31);
        int salaryHourExtra = prefs.getInt("snumber5",31);
        int salaryDrive = prefs.getInt("snumber6",31);
        float salaryTwoFirst = prefs.getFloat("present1",31f);
        float salaryTowAfter = prefs.getFloat("present2",31f);
        if(res<=salaryHourExtra) {
            res *= salaryHour;
        }
        else if(res>salaryHourExtra && res<salaryHourExtra+2){
            salaryTwoFirst *= salaryHour;
            res = (res-salaryHourExtra) * salaryTwoFirst;
            res += salaryHourExtra * salaryHour;
        }
        else if(res>=salaryHourExtra+2){
            salaryTowAfter *= salaryHour;
            res = (res-salaryHourExtra) * salaryTowAfter;
            res += salaryHourExtra * salaryHour;
        }
        res+=salaryDrive;
        return res;
    }
}
