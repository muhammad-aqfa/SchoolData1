#include <stdio.h>

int max_number(int *arr, int size) //(int arr[], int size)
{
    int i, max;
    max = arr[0]; //אתחול האיבר הראשון במערך כמספר הגבוה ביותר
    for(i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

void main()
{
    int arr[10],i, max;
    for(i = 0; i < 10; i++)
    {
        printf("Please enter a number to cell %d: ", i);
        scanf("%d", &arr[i]);
    }
    max = max_number(arr, 10);
    printf("The max number in the array is %d\n", max);
}

