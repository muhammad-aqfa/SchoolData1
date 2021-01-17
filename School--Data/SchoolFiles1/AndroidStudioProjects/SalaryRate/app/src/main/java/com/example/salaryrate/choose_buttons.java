package com.example.salaryrate;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import com.google.firebase.auth.FirebaseAuth;

public class choose_buttons extends AppCompatActivity {
     private  Button btnprofile,btnsalayrates,btnmalerates,btnaddshift,btnexit;
    private FirebaseAuth mAuth;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_choose_buttons);
        btnprofile=findViewById(R.id.profile);
        btnsalayrates=findViewById(R.id.salayrates);
        btnmalerates=findViewById(R.id.malerates);
        mAuth = FirebaseAuth.getInstance();
        btnaddshift=findViewById(R.id.addshift);
        btnexit=findViewById(R.id.exit);
        btnprofile.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(choose_buttons.this, profile.class);
                startActivity(intent);
                overridePendingTransition(R.anim.slide_to_right, R.anim.slide_out_left);
                Toast.makeText(choose_buttons.this, "פרופיל", Toast.LENGTH_LONG).show();
            }
        });
        btnsalayrates.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(choose_buttons.this, salary_rates.class);
                startActivity(intent);
                overridePendingTransition(R.anim.slide_to_right, R.anim.slide_out_left);
                Toast.makeText(choose_buttons.this, "הגדרות שכר", Toast.LENGTH_LONG).show();
            }
        });
        btnmalerates.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(choose_buttons.this, male_rates.class);
                startActivity(intent);
                overridePendingTransition(R.anim.slide_to_right, R.anim.slide_out_left);
                Toast.makeText(choose_buttons.this, "תערפי שכר", Toast.LENGTH_LONG).show();

            }
        });
        btnaddshift.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(choose_buttons.this, list_view.class);
                startActivity(intent);
                overridePendingTransition(R.anim.slide_to_right, R.anim.slide_out_left);
                Toast.makeText(choose_buttons.this, "הוספת משמרית", Toast.LENGTH_LONG).show();
            }
        });
        btnexit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                mAuth.signOut();
                startActivity(new Intent(choose_buttons.this,UserName.class));
                overridePendingTransition(R.anim.slide_to_left, R.anim.slide_out_right);
                Toast.makeText(choose_buttons.this, " GoodBye", Toast.LENGTH_LONG).show();
            }
        });
    }
}
