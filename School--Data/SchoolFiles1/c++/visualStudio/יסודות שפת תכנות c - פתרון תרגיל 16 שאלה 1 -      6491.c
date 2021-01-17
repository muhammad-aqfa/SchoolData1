#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//סעיף א - יצירת מבנה של עובד
typedef struct
{
    int id, gender, age;
    char name[30];
} Employee;

//סעיף ב - פונקציה לקליטת עובד
void createEmployee(Employee *e)
{
    printf("ID: ");
    scanf("%d", &e->id);
    fflush(stdin);
    printf("Name: ");
    gets(e->name);
    printf("gender (1-male, 2-female): ");
    scanf("%d", &e->gender);
    printf("age: ");
    scanf("%d", &e->age);
}

//סעיף ג - פונקציה להדפסת פרטי עובד
void printEmployee(Employee *e)
{
    printf("ID: %d\n", e->id);
    printf("Name: ");
    puts(e->name);
    printf("gender: %d\n", e->gender);
    printf("age: %d\n", e->age);
}

void main()
{
    Employee e, e1 = {};
    printf("Enter Employee Details\n----------------\n");
    createEmployee(&e);
    printf("Print Employee Details\n----------------\n");
    printEmployee(&e);
}