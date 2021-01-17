
#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char name[50];
    float grade_c, grade_html, grade_math;
} student;

void main()
{
    //הגדרת סטודנט
    student s;

    float avg;

    //קליטת פרטי הסטודנט
    printf("ID: ");
    scanf("%d", &s.id);
    fflush(stdin);

    printf("Name: ");
    gets(s.name);

    printf("Grade C: ");
    scanf("%f", &s.grade_c);

    printf("Grade HTML: ");
    scanf("%f", &s.grade_html);

    printf("Grade Math: ");
    scanf("%f", &s.grade_math);

    //show the details
    printf("Hi, ");
    puts(s.name);
    avg = (s.grade_c + s.grade_html + s.grade_math) / 3.0;
    printf("ID: %d\nGrade C: %.2f\nGrade HTML: %.2f\nGrade Math: %.2f\nGrade AVG: %.2f\n", s.id, s.grade_c, s.grade_html, s.grade_math, avg);
    
    



}