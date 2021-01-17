package com.example.salaryrate;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class male_rates extends AppCompatActivity {
    private Button male_rates_menus1, male_rates_plus1, male_rates_menus2, male_rates_plus2,left;
    private TextView male_rates_present, male_rates_present2,hour;
    private double x,y;
    private SharedPreferences preferences;
    SharedPreferences.Editor editor;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_male_rates);
        male_rates_menus1 = findViewById(R.id.male_rates_menus1);
        male_rates_present = findViewById(R.id.male_rates_present);
        male_rates_plus1 = findViewById(R.id.male_rates_plus1);
        male_rates_menus2 = findViewById(R.id.male_rates_menus2);
        male_rates_present2 =findViewById(R.id.male_rates_present2);
        male_rates_plus2 =findViewById(R.id.male_rates_plus2);
        hour=findViewById(R.id.hour);
        left=findViewById(R.id.left);
        left.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(male_rates.this, choose_buttons.class);
                startActivity(intent);
                overridePendingTransition(R.anim.slide_to_left, R.anim.slide_out_right);
            }
        });
        preferences = getSharedPreferences("pref", Context.MODE_PRIVATE);
        editor = preferences.edit();
        String present1 = "" + preferences.getFloat("present1",1.25f);
        male_rates_present.setText(present1);
        String present2 = "" + preferences.getFloat("present2",1.50f);
        male_rates_present2.setText(present2);
        String hour1 = "" + preferences.getInt("snumber5",8);
        hour.setText(hour1);
        male_rates_menus1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String countvalue = male_rates_present.getText().toString();
                Float num1= Float.parseFloat(countvalue);
                x=num1-0.25;
                if(x>=1.25) {
                    male_rates_present.setText(String.valueOf(x));
                    editor.putFloat("present1",(float)x);
                    editor.apply();
                }
            }
        });
        male_rates_plus1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String countvalue = male_rates_present.getText().toString();
                Float num1= Float.parseFloat(countvalue);
                x=num1+0.25;
                if(x>=1.25) {
                    male_rates_present.setText(String.valueOf(x));
                    editor.putFloat("present1",(float)x);
                    editor.apply();
                }
            }
        });
        male_rates_menus2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String value = male_rates_present2.getText().toString();
                Float num2= Float.parseFloat(value);
                y=num2-0.25;
                if(y>=1.25) {
                    male_rates_present2.setText(String.valueOf(y));
                    editor.putFloat("present2",(float)y);
                    editor.apply();
                }
            }
        });
        male_rates_plus2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String value = male_rates_present2.getText().toString();
                Float num2= Float.parseFloat(value);
                y=num2+0.25;
                if(y>=1.25) {
                    male_rates_present2.setText(String.valueOf(y));
                    editor.putFloat("present2",(float)y);
                    editor.apply();
                }
            }
        });

    }
}
