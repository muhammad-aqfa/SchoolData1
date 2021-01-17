package com.example.salaryrate;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;

import java.security.cert.Extension;
import java.util.ArrayList;
import java.util.List;

public class profile extends AppCompatActivity {
    private Button cancel,save;
    private EditText editText2,editText3,editText4,editText5;
    private TextView email;
    FirebaseAuth mAuth;
    DatabaseReference databaseReference;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_profile);
        databaseReference= FirebaseDatabase.getInstance().getReference("Profile");
        cancel=findViewById(R.id.profile_cancel);
        editText2=findViewById(R.id.EditTxt2);
        editText3=findViewById(R.id.EditTxt3);
        editText4=findViewById(R.id.EditTxt4);
        editText5=findViewById(R.id.EditTxt5);
        email = findViewById(R.id.txtview);
        mAuth = FirebaseAuth.getInstance();
        email.setText(mAuth.getCurrentUser().getEmail());

        ValueEventListener eventListener = new ValueEventListener() {
            @Override
            public void onDataChange(DataSnapshot dataSnapshot) {
                String age = dataSnapshot.child(mAuth.getUid()).child("Age").getValue(String.class);
                String phone = dataSnapshot.child(mAuth.getUid()).child("Phone").getValue(String.class);
                String gender = dataSnapshot.child(mAuth.getUid()).child("Gender").getValue(String.class);
                String date = dataSnapshot.child(mAuth.getUid()).child("Date").getValue(String.class);
                editText2.setText(age);
                editText3.setText(phone);
                editText4.setText(gender);
                editText5.setText(date);
            }
            @Override
            public void onCancelled(DatabaseError databaseError) {}
        };
        databaseReference.addListenerForSingleValueEvent(eventListener);


        save=findViewById(R.id.profile_save);
       cancel.setOnClickListener(new View.OnClickListener() {
           @Override
           public void onClick(View v) {
               Intent intent = new Intent(profile.this, choose_buttons.class);
               startActivity(intent);
               overridePendingTransition(R.anim.slide_to_left, R.anim.slide_out_right);
           }
       });
       save.setOnClickListener(new View.OnClickListener() {
           @Override
           public void onClick(View v) {

               databaseReference.child(mAuth.getUid()).child("Age").setValue(editText2.getText().toString());
               databaseReference.child(mAuth.getUid()).child("Phone").setValue(editText3.getText().toString());
               databaseReference.child(mAuth.getUid()).child("Gender").setValue(editText4.getText().toString());
               databaseReference.child(mAuth.getUid()).child("Date").setValue(editText5.getText().toString());
               Intent intent = new Intent(profile.this, choose_buttons.class);
               startActivity(intent);
               overridePendingTransition(R.anim.slide_to_right, R.anim.slide_out_left);
               //go back
           }
       });
    }
}
