#include <stdio.h>
#define N 10

//פונקציה להדפסת המערך
void printArr(char *arr, int size)
{
    int i;
    printf("\n---------------\n");
    for (i = 0; i < size; i++)
        printf("%c ", arr[i]);
    printf("\n---------------\n");
}

//פונקציה למיון בועות
char *bubble_sort(char *arr, int size)
{
    int i, j, sorted = 0;
    char temp;
    for (i = 1; i <= size - 1 && !sorted; i++)
    {
        sorted = 1;
        for (j = 0; j < size - i; j++)
        {
            if (arr[j] < arr[j + 1]) //בדיקה שהאיבר הנוכחי קטן מהאיבר הבא
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sorted = 0;
            }
        }
    }
    return arr;
}

void main()
{
    char arr[N], tav, *newArr;
    int i;

    //קליטת תווים
    for (i = 0; i < N; i++)
    {
        printf("Please enter a character to the array [%d]: ", i);
        scanf("%c", &tav);
        if (!(tav >= 'a' && tav <= 'z'))
        {
            printf("Only small letters are allow!\nBye Bye!!");
            return;
        }
        arr[i] = tav;
        fflush(stdin);
    }

    //הדפסת המערך לפני מיון
    printArr(arr, N);

    //מיון המערך באמצעות מיון בועות
    newArr = bubble_sort(arr,N);

    //הדפסת המערך אחרי מיון
    printArr(newArr, N);
}

/*

Please enter a character to the array [0]: q
Please enter a character to the array [1]: r
Please enter a character to the array [2]: g
Please enter a character to the array [3]: j
Please enter a character to the array [4]: k
Please enter a character to the array [5]: o
Please enter a character to the array [6]: a
Please enter a character to the array [7]: v
Please enter a character to the array [8]: p
Please enter a character to the array [9]: b

---------------
q r g j k o a v p b
---------------

---------------
v r q p o k j g b a
---------------

*/