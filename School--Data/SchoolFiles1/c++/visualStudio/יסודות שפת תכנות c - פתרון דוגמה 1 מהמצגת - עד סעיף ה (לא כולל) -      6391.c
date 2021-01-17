#include <stdio.h>
#include <string.h>

#define N 3

typedef struct
{
    int code;
    char name[50];
    long population;
} city;

//פונקציה שמקבלת מערך של ערים ומדפיסה
void printCities(city *cities)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printCity(cities[i]);
        printf("\n------------------\n");
    }
}

//פונקציה שמקבלת מערך של ערים ומדפיסה רק את אלו שכמות התושבים מעל מיליון
void printCitiesOverMilion(city *cities)
{
    int i;
    for (i = 0; i < N; i++)
    {
        if (cities[i].population >= 1000000)
        {
            printCity(cities[i]);
            printf("\n------------------\n");
        }
    }
}

//פונקציה שמקבלת עיר ומדפיסה את כל הפרטים שלה
void printCity(city c)
{
    printf("Code: %d\n", c.code);
    printf("Name: ");
    puts(c.name);
    printf("Population: %ld\n", c.population);
}

void main()
{
    int i;
    city cities[N];

    //קליטת ערים
    for (i = 0; i < N; i++)
    {
        printf("Details for city %d:\n--------------\n", i + 1);
        printf("Code: ");
        scanf("%d", &cities[i].code);
        fflush(stdin);
        printf("Name: ");
        gets(cities[i].name);
        printf("Population: ");
        scanf("%ld", &cities[i].population);
    }

    printf("List Of Cities:\n--------------------\n");
    printCities(cities);

    printf("List Of Cities Over 1,000,000:\n--------------------\n");
    printCitiesOverMilion(cities);

    system("pause");

}
