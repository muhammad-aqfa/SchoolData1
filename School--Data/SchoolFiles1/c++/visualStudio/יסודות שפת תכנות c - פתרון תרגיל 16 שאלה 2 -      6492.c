#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//סעיף א - יצירת מבנה של עיגול צבעוני
typedef struct
{
    float radius;
    char color[50];
} Circle;

//סעיף ב - כתיבת התוכנית
void main()
{
    Circle *circles, *reds;
    int size, size2, i;

    //קליטת כמות העיגולים
    printf("How many circles do you want? ");
    scanf("%d", &size);

    //יצירת המערך הדינאמי
    circles = (Circle*)malloc(size * sizeof(Circle));

    printf("Enter\n---------------\n");

    //קליטת ערכים למערך
    for (i = 0; i < size; i++)
    {
        printf("Details for circle #%d:\n----------------\n", i + 1);
        printf("Raduis: ");
        scanf("%f", &circles[i].radius);
        fflush(stdin);
        printf("Color: ");
        gets(circles[i].color);
    }

    printf("Print\n---------------\n");

    //הדפסת ערכים מהמערך
    for (i = 0; i < size; i++)
    {
        printf("Details for circle #%d:\n----------------\n", i + 1);
        printf("Raduis: %.2f\n", circles[i].radius);
        printf("Color: ");
        puts(circles[i].color);
    }

    //יצירת מערך חדש של עיגולים אדומים שהרדיוס שלהם גדול מ-5
    size2 = 0;
    //יצירת המערך הדינאמי
    reds = (Circle*)malloc(size2 * sizeof(Circle));
    //סריקת המערך הקיים
    for (i = 0; i < size; i++)
    {
        if (strcmp(circles[i].color, "red") == 0 && circles[i].radius > 5)
        {
            reds = (Circle*)realloc(reds, (size2 + 1) * sizeof(Circle));
            reds[size2++] = circles[i];
        }
    }

     //הדפסת ערכים מהמערך החדש של האדומים
    for (i = 0; i < size2; i++)
    {
        printf("Details for reds #%d:\n----------------\n", i + 1);
        printf("Raduis: %.2f\n", reds[i].radius);
        printf("Color: ");
        puts(reds[i].color);
    }
}

/*
How many circles do you want? 3

Enter
---------------
Details for circle #1:
----------------
Raduis: 6
Color: red
Details for circle #2:
----------------
Raduis: 3
Color: red
Details for circle #3:
----------------
Raduis: 2
Color: green

Print
---------------
Details for circle #1:
----------------
Raduis: 6.00
Color: red
Details for circle #2:
----------------
Raduis: 3.00
Color: red
Details for circle #3:
----------------
Raduis: 2.00
Color: green

Details for reds #1:
----------------
Raduis: 6.00
Color: red


*/




