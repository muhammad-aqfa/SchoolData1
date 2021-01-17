#include <stdio.h>
#include <string.h>

typedef struct {
   int ID, grade_math, grade_c, grade_html;
   char name[50]; 
} student;

void main(){
    student s;
    float avg;

    printf("Please enter you details:\n");
    //קליטת מספר הסטודנט
    printf("ID: ");
    scanf("%d", &s.ID);
    fflush(stdin);

    //קליטת שם הסטודנט
    printf("Name: ");
    gets(s.name);

    //קליטת ציונים
    printf("C: ");
    scanf("%d", &s.grade_c);
    printf("HTML: ");
    scanf("%d", &s.grade_html);
    printf("Math: ");
    scanf("%d", &s.grade_math);
    
    //חישוב ממוצע
    avg = (s.grade_c + s.grade_html + s.grade_math) /3.0;

    //הדפסת הפרטים
    printf("Hi %s (ID: %d),\nC: %d\nHTML:%d\nMath:%d\nAVG:%.3f\n\n",s.name, s.ID, s.grade_c, s.grade_html, s.grade_math, avg);

    //בדיקת ציון מעל 80
    if(s.grade_c > 80)
        printf("your grade in C is over 80\n");
    if(s.grade_html > 80)
        printf("your grade in HTML is over 80\n");
    if(s.grade_math > 80)
        printf("your grade in Math is over 80\n");

    system("pause");
}
