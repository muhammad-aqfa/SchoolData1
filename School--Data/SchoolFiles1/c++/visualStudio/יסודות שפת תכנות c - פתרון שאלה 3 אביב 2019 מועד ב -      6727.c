
#include <stdio.h>

int sum_digits(int num)
{
    if (num <= 0)
        return 0;
    return (num % 10) + sum_digits(num / 10);
}

int find_max_sum_digits(int *arr, int size, int full_size) //size => itaration  |  full_size => array length
{
    //משתנה סטטי הוא שערכו נשמר לכל אורך התוכנית
    int static max_sum_digit = 0; 
    int static max_sum_digits_index = 0;
    int sum;
    if (!size) //if(size == 0)
    {
        printf("max sum --> %d\n", max_sum_digit); //הדפסת הסכום הגבוה ביותר
        max_sum_digit = 0;  
        sum = max_sum_digits_index;
        max_sum_digits_index = 0;
        return sum; //החזרת האינדקס של האיבר בעל סכום הספרות הגבוה ביותר
    }
    sum = sum_digits(arr[size - 1]); //חישוב סכום הספרות של המספר באיבר הנוכחי
    if (sum > max_sum_digit)
    {
        max_sum_digit = sum;
        max_sum_digits_index = size - 1;
    }
    return find_max_sum_digits(arr, size - 1, full_size); //הפעלת הרקורסיה
}

void main()
{
    int arr[5] = {45, 67, 89, 12, 34}, size = 5, full_size = 5;
    printf("index --> %d", find_max_sum_digits(arr,size,full_size));
}
