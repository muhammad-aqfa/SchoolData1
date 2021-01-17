package com.example.salaryrate;

import android.app.DatePickerDialog;
import android.app.Dialog;
import android.app.TimePickerDialog;
import android.content.Intent;
import android.icu.text.SimpleDateFormat;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.DatePicker;
import android.widget.EditText;
import android.widget.TimePicker;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;

import java.util.ArrayList;
import java.util.Calendar;
import java.util.List;

import static android.os.Build.ID;


public class mySalary extends AppCompatActivity {
    private Button btndate1, btntime1, btndate2, btntime2,btnsave1,cancel;
    private EditText setdate2, settime2,setdate1, settime1;
    private FirebaseAuth mAuth;
    DatabaseReference databaseDatetime;
    private static final int Date_id = 0;
    private static final int Time_id = 1;
    private static final int Date_id1 = 2;
    private static final int Time_id1 = 3;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_my_salary);
        databaseDatetime= FirebaseDatabase.getInstance().getReference("DateTime");
        mAuth = FirebaseAuth.getInstance();
        btndate1 = (Button) findViewById(R.id.selectdate);
        btntime1 = (Button)findViewById(R.id.selecttime);
         btndate2 =  (Button)findViewById(R.id.selectdate1);
         btntime2 = (Button) findViewById(R.id.selecttime1);
        setdate1 =(EditText) findViewById(R.id.set_date1);
        setdate2 =(EditText) findViewById(R.id.set_date2);
        settime1 = (EditText)findViewById(R.id.set_time1);
        settime2 =(EditText) findViewById(R.id.set_time2);
        btnsave1= (Button)findViewById(R.id.mysalary_save);
        cancel=findViewById(R.id.mysalary_cancel);
//        try {
//            //Dates to compare
//
//
//
//            //Setting dates
//             String date1= setdate1.getText().toString().trim();
//            String date2 = setdate2.getText().toString().trim();
//
//            //Comparing dates
//            long difference = Math.abs(date1.getTime() - date2.getTime());
//            long differenceDates = difference / (24 * 60 * 60 * 1000);
//
//            //Convert long to String
//            String dayDifference = Long.toString(differenceDates);
//
//            Log.e("HERE","HERE: " + dayDifference);
//
//        } catch (Exception exception) {
//            Log.e("DIDN'T WORK", "exception " + exception);
//        }
        btnsave1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                    databasesave();
                    Intent intent = new Intent(mySalary.this, list_view.class);
                    startActivity(intent);
                    overridePendingTransition(R.anim.slide_to_left, R.anim.slide_out_right);
                    Toast.makeText(mySalary.this, "הוספית משמרית", Toast.LENGTH_LONG).show();
            }
        });
        cancel.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(mySalary.this, choose_buttons.class);
                startActivity(intent);
                overridePendingTransition(R.anim.slide_to_left, R.anim.slide_out_right);
            }
        });
        btndate1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View arg0) {

                // Show Date dialog
                showDialog(Date_id);
            }
        });
        btntime1.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View arg0) {

                // Show time dialog
                showDialog(Time_id);
            }
        });

        btndate2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View arg0) {

                // Show Date dialog
                showDialog(Date_id1);
            }
        });
        btntime2.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View arg0) {

                // Show time dialog
                showDialog(Time_id1);
            }
        });
    }
    private void  databasesave() {
        //String id = databaseDatetime.push().getKey();
        String Edttxt_sd1 = setdate1.getText().toString().trim();
        String Edttxt_sd2 = setdate2.getText().toString().trim();
        String Edttxt_st1 = settime1.getText().toString().trim();
        String Edttxt_st2 = settime2.getText().toString().trim();
        //DateTime dateTime=new DateTime(Edttxt_sd1,Edttxt_st1,Edttxt_sd2,Edttxt_st2);
        final String dateTime = " End: "+Edttxt_sd2+ " " +Edttxt_st2 +" Start: " + Edttxt_sd1 + " " + Edttxt_st1 ;
        DatabaseReference listIdRef = databaseDatetime.child(mAuth.getUid()).child("Shifts");
        ValueEventListener valueEventListener = new ValueEventListener() {
            @Override
            public void onDataChange(DataSnapshot dataSnapshot) {
                List<String> list = new ArrayList<>();
                for(DataSnapshot ds : dataSnapshot.getChildren()) {
                    String comment = ds.getValue(String.class);
                    list.add(comment);
                }
                //Do what you need to do with your list
                list.add(dateTime);
                databaseDatetime.child(mAuth.getUid()).child("Shifts").setValue(list);
            }

            @Override
            public void onCancelled(@NonNull DatabaseError databaseError) {
                //Log.d(TAG, databaseError.getMessage());
            }
        };
        listIdRef.addListenerForSingleValueEvent(valueEventListener);
        //databaseDatetime.child(mAuth.getUid()).setValue(dateTime);
   }
    protected Dialog onCreateDialog(int id) {

        // Get the calander
        Calendar c = Calendar.getInstance();

        // From calander get the year, month, day, hour, minute
        int year = c.get(Calendar.YEAR);
        int month = c.get(Calendar.MONTH);
        int day = c.get(Calendar.DAY_OF_MONTH);
        int hour = c.get(Calendar.HOUR_OF_DAY);
        int minute = c.get(Calendar.MINUTE);
        int year1 = c.get(Calendar.YEAR);
        int month1 = c.get(Calendar.MONTH);
        int day1 = c.get(Calendar.DAY_OF_MONTH);
        int hour1 = c.get(Calendar.HOUR_OF_DAY);
        int minute1 = c.get(Calendar.MINUTE);
        switch (id) {
            case Date_id:
                return new DatePickerDialog(mySalary.this, date_listener, year,
                        month, day);
            case Time_id:
                return new TimePickerDialog(mySalary.this, time_listener, hour,
                        minute, false);
            case Date_id1:
                return new DatePickerDialog(mySalary.this, date_listener1, year1,
                        month1, day1);
            case Time_id1:
                return new TimePickerDialog(mySalary.this, time_listener1, hour1,
                        minute1, false);
        }
        return null;
    }
    // Date picker dialog
    DatePickerDialog.OnDateSetListener date_listener = new DatePickerDialog.OnDateSetListener() {

        @Override
        public void onDateSet(DatePicker view, int year, int month, int day) {
            // store the data in one string and set it to text
            month=month+1;
            String date =  String.valueOf(day) + "/" +String.valueOf(month)
                    + "/" + String.valueOf(year);
            setdate1.setText(date);
        }
    };
    TimePickerDialog.OnTimeSetListener time_listener = new TimePickerDialog.OnTimeSetListener() {
        @Override
        public void onTimeSet(TimePicker view, int hour, int minute) {
            // store the data in one string and set it to text
            if(minute>=0 && minute<=9){
                String time = String.valueOf(hour) + ":" +"0"+ String.valueOf(minute);
                settime1.setText(time);
            }
           else {
                String time = String.valueOf(hour) + ":" + String.valueOf(minute);
                settime1.setText(time);
            }
        }
    };
    DatePickerDialog.OnDateSetListener date_listener1 = new DatePickerDialog.OnDateSetListener() {

        @Override
        public void onDateSet(DatePicker view, int year1, int month1, int day1) {
            // store the data in one string and set it to text
            month1=month1+1;
            String date1 =  String.valueOf(day1)+ "/"+String.valueOf(month1)
                    + "/" + String.valueOf(year1);
            setdate2.setText(date1);
        }
    };
    TimePickerDialog.OnTimeSetListener time_listener1 = new TimePickerDialog.OnTimeSetListener() {
        @Override
        public void onTimeSet(TimePicker view, int hour1, int minute1) {
            if(minute1>=0 && minute1<=9){
                String time = String.valueOf(hour1) + ":" +"0"+ String.valueOf(minute1);
                settime2.setText(time);
            }
            else {
                String time = String.valueOf(hour1) + ":" + String.valueOf(minute1);
                settime2.setText(time);
            }
        }
    };
}