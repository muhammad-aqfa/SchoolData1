#include <stdio.h>
#include <string.h>

#define N 10

typedef struct
{
    int id, rainyDays;
    float maxTemp, minTemp;
} station;

//פונקציה של סעיף א
station GetMinTempStation(station *stations)
{
    int i;
    station minStation = stations[0];

    for (i = 1; i < N; i++)
    {
        if (minStation.minTemp > stations[i].minTemp)
            minStation = stations[i];
    }

    return minStation;
}

//פונקציה של סעיף ב
void SumRainyDays(station *stations)
{
    int sum = 0, i;

    for (i = 0; i < N; i++)
    {
        sum += stations[i].rainyDays;
    }

    printf("Total Rainy days: %d", sum);
}

void main()
{
    int i;
    station stations[N], minStation; //מערך של תחנות

    printf("Stations details:\n--------------\n");
    //קליטת נתונים באמצעות לולאה
    for (i = 0; i < N; i++)
    {
        printf("Details for station number %d:\n", i + 1);
        stations[i].id = i + 1;
        printf("max temp: ");
        scanf("%f", &stations[i].maxTemp);
        printf("min temp: ");
        scanf("%f", &stations[i].minTemp);
        printf("rainy days: ");
        scanf("%d", &stations[i].rainyDays);
        printf("----------------\n");
    }

    //קריאה לפונקציה של סעיף א
    minStation = GetMinTempStation(stations);
    printf("In station number %d we found the minimum temp of %.2f\n", minStation.id, minStation.minTemp);

    //קריאה לפונקציה של סעיף ב
    SumRainyDays(stations);
}