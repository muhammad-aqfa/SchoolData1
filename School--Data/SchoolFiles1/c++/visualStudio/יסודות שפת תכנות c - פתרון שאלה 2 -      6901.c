#include <stdio.h>
#include <stdlib.h>

int *hexa_to_binary_array(unsigned char num)
{
    int *dyn_arr, i, num_of_ones = 0, num_of_zeros = 0;
    unsigned char mask = 0x80; //קביעת ערך המסכה

    //יצירת המערך הדינאמי
    dyn_arr = (int *)malloc(10 * sizeof(int));

    //לולאה שרצה סיבית סיבית על המספר שהתקבל - מתחילים בסיבית השמאלית
    for (i = 0; i < 8; i++)
    {
        //בדיקה של סיבית אחת במספר
        if (num & mask)
        {
            dyn_arr[i] = 1;
            num_of_ones++;
        }
        else
        {
            dyn_arr[i] = 0;
            num_of_zeros++;
        }

        mask = mask >> 1; //הזזת הסיבית צעד אחד ימינה
    }

    //השמת כמות האחדים והאפסים במערך
    dyn_arr[8] = num_of_ones;
    dyn_arr[9] = num_of_zeros;

    return dyn_arr;
}

void print_array(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

void main()
{
    int *arr;
    arr = hexa_to_binary_array(0xFF);
    print_array(arr, 10);

    arr = hexa_to_binary_array(0x2A);
    print_array(arr, 10);
}