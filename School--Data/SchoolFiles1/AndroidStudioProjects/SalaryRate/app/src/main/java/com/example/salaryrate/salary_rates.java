package com.example.salaryrate;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

public class salary_rates extends AppCompatActivity {
    private Button S_menus1,S_plus1,S_menus2,S_plus2,S_menus3,S_plus3,left;
    private TextView S_number1,S_number2,S_number3;
    private double x;
    int num1,num2,num3;
    private SharedPreferences preferences;
    SharedPreferences.Editor editor;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_salary_rates);
        S_number1=findViewById(R.id.S_number1);
        S_number2 = findViewById(R.id.S_number2);
        S_menus1=findViewById(R.id.S_menus1);
        S_plus1=findViewById(R.id.S_plus1);
        S_menus2=findViewById(R.id.S_menus2);
        S_plus2=findViewById(R.id.S_plus2);
        S_menus3=findViewById(R.id.S_menus3);
        left=findViewById(R.id.left);
        S_plus3=findViewById(R.id.S_plus3);
        S_number3 = findViewById(R.id.S_number3);
        left.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(salary_rates.this, choose_buttons.class);
                startActivity(intent);
                overridePendingTransition(R.anim.slide_to_left, R.anim.slide_out_right);
            }
        });
        preferences = getSharedPreferences("pref", Context.MODE_PRIVATE);
        editor = preferences.edit();
        String snumber4 = "" + preferences.getInt("snumber4",31);
        S_number1.setText(snumber4);
        String snumber5 = "" + preferences.getInt("snumber5",8);
        S_number2.setText(snumber5);
        String snumber6 = "" + preferences.getInt("snumber6",25);
        S_number3.setText(snumber6);
        S_menus1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String countvalue=S_number1.getText().toString();
                num1= Integer.parseInt(countvalue);
                if(num1>0) {
                    num1--;
                    S_number1.setText(String.valueOf(num1));
                    editor.putInt("snumber4", num1);
                    editor.apply();
                }
            }
        });
        S_plus1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String countvalue=S_number1.getText().toString();
                num1= Integer.parseInt(countvalue);
                num1++;
                S_number1.setText(String.valueOf(num1));
                editor.putInt("snumber4",num1);
                editor.apply();
            }
        });
        S_menus2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String value=S_number2.getText().toString();
                num2=Integer.parseInt(value);
                num2--;
                if(num2>0) {
                    S_number2.setText(String.valueOf(num2));
                    editor.putInt("snumber5",num2);
                    editor.apply();
                }
            }
        });
        S_plus2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String value=S_number2.getText().toString();
                num2=Integer.parseInt(value);
                num2++;
                S_number2.setText(String.valueOf(num2));
                editor.putInt("snumber5",num2);
                editor.apply();
            }
        });
        S_menus3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String x=S_number3.getText().toString();
                num3= Integer.parseInt(x);
                num3--;
                if(num3>0) {
                    S_number3.setText(String.valueOf(num3));
                    editor.putInt("snumber6",num3);
                    editor.apply();
                }
            }
        });
        S_plus3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String x=S_number3.getText().toString();
                num3= Integer.parseInt(x);
                num3++;
                if(num3>0) {
                    S_number3.setText(String.valueOf(num3));
                    editor.putInt("snumber6",num3);
                    editor.apply();
                }
            }
        });
    }
}

