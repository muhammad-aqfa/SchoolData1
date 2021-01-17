package com.example.salaryrate;

import com.google.firebase.database.DatabaseReference;

public class DateTime {
  String setdate1;
  String setdate2;
  String settime1;
  String settime2;

  public DateTime(){

  }
  public DateTime(String setdate1,String setdate2 ,String settime1, String settime2) {
    this.setdate1 = setdate1;
    this.setdate2 = setdate2;
    this.settime1 = settime1;
    this.settime2 = settime2;
  }

  public String getSetdate1() {
    return setdate1;
  }
  public String getSetdate2() {
    return setdate2;
  }
  public String getSettime1() {
    return settime1;
  }
  public String getSettime2() {
    return settime2;
  }

  public void setSetdate1(String setdate1) {
    this.setdate1 = setdate1;
  }

  public void setSetdate2(String setdate2) {
    this.setdate2 = setdate2;
  }

  public void setSettime1(String settime1) {
    this.settime1 = settime1;
  }

  public void setSettime2(String settime2) {
    this.settime2 = settime2;
  }
}