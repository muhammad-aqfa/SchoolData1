package com.example.salaryrate;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.auth.AuthResult;
import com.google.firebase.auth.FirebaseAuth;

public class insertEmail extends AppCompatActivity {

    private EditText UserNameLogin, password,insert_password;
    private Button SignUpfirebase;
    private FirebaseAuth mAuth;
    private String Str;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_insert_email);
        mAuth=FirebaseAuth.getInstance();
        insert_password=findViewById(R.id.insert_password);
        UserNameLogin=findViewById(R.id.UserNameLogin);
        password=findViewById(R.id.password);
        (findViewById(R.id.SignUpfirebase)).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(password.getText().toString().equals(insert_password.getText().toString())) {
                    mAuth.createUserWithEmailAndPassword(UserNameLogin.getText().toString(), password.getText().toString())
                            .addOnCompleteListener(insertEmail.this, new OnCompleteListener<AuthResult>() {
                                @Override
                                public void onComplete(@NonNull Task<AuthResult> task) {
                                    if (task.isSuccessful()) {
                                        // Sign in success, update UI with the signed-in user's information
                                        Intent intent = new Intent(insertEmail.this, choose_buttons.class);
                                        Str = UserNameLogin.getText().toString();
                                        intent.putExtra("str",Str);
                                        startActivity(intent);
                                        overridePendingTransition(R.anim.slide_to_left, R.anim.slide_out_right);
                                        Toast.makeText(insertEmail.this, "Success", Toast.LENGTH_LONG).show();
                                    }
                                    else {
                                        // If sign in fails, display a message to the user.
                                        Toast.makeText(insertEmail.this, "not Success", Toast.LENGTH_LONG).show();

                                    }
                                    // ...
                                }
                            });
                }
                else {
                    Toast.makeText(insertEmail.this, "try your password again", Toast.LENGTH_LONG).show();
                }
            }
        });
    }
}
