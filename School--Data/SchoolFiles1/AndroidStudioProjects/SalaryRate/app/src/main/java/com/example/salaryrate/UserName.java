package com.example.salaryrate;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.auth.AuthResult;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;

public class UserName extends AppCompatActivity {
    private EditText UserNameLogin;
    private EditText password;
    private Button Sign_in, forget;
    private FirebaseAuth mAuth;
    @Override
    public void onStart() {
        super.onStart();
        // Check if user is signed in (non-null) and update UI accordingly.
        FirebaseUser currentUser = mAuth.getCurrentUser();
        if(currentUser != null) {
            Intent intent = new Intent(UserName.this, choose_buttons.class);
            startActivity(intent);
        }
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_username);
        mAuth = FirebaseAuth.getInstance();
        UserNameLogin = findViewById(R.id.UserNameLogin);
        password = findViewById(R.id.password);
        (findViewById(R.id.Sign_in)).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                mAuth.signInWithEmailAndPassword(UserNameLogin.getText().toString(), password.getText().toString())
                        .addOnCompleteListener(UserName.this, new OnCompleteListener<AuthResult>() {
                            @Override
                            public void onComplete(@NonNull Task<AuthResult> task) {
                                if (task.isSuccessful()) {
                                    // Sign in success, update UI with the signed-in user's information
                                    Intent intent = new Intent(UserName.this,choose_buttons.class);
                                    startActivity(intent);
                                    //overridePendingTransition(R.anim.slide_to_right, R.anim.slide_out_left);
                                    Toast.makeText(UserName.this, "Success", Toast.LENGTH_LONG).show();
                                } else {
                                    // If sign in fails, display a message to the user.
                                    Toast.makeText(UserName.this, "Failed", Toast.LENGTH_LONG).show();
                                }
                                // ...
                            }
                        });
            }
        });
        (findViewById(R.id.forget)).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(UserName.this, insertEmail.class);
                startActivity(intent);
                overridePendingTransition(R.anim.slide_to_right, R.anim.slide_out_left);
            }
        });
    }
}


