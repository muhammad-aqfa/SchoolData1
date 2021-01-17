#include <stdio.h>
#include <string.h>
#define N 4

// void main()
// {
//     char string[N][N * 5];
//     int i;
//     //קליטת מחרוזות למערך
//     for (i = 0; i < N; i++)
//     {
//         printf("Please enter a text in line %d:", i);
//         gets(string[i]);
//     }

//     //הדפסת המחרוזות במערך
//     for (i = 0; i < N; i++)
//     {
//         printf("line %d: %s \n", i, string[i]);
//     }
// }

//שאלה דוגמה מהמצגת
// void main()
// {
//     char strings[8][20];
//     int i, j, len, small_letter_count = 0, counter2 = 0;

//     קליטת כל המחרוזות
//     for (i = 0; i < 8; i++)
//     {
//         printf("Please enter a text in line %d: ", i);
//         gets(strings[i]);
//     }

//     הדפסת כל המחרוזות והאורך של כל מחרוזת
//     בלולאה זו גם נבצע בדיקות
//     for (i = 0; i < 8; i++)
//     {
//         len = strlen(strings[i]);
//         printf("Line %d: %s (length = %d)\n", i, strings[i], len);

//         for (j = 0; j < len; j++) //for (j = 0; strings[i][j]; j++)
//         {
//             if (strings[i][j] >= 'a' && strings[i][j] <= 'z')
//             {
//                 small_letter_count++;
//                 break;
//             }
//         }
//     }
// }

//שאלה 6
int myFunc(char str[])
{
    int len;
    len = strlen(str);
    if (str[0] == str[len - 1])
        return 1;
    return 0;
}

void main()
{
    char string[] = "Hello my name is Tom";
    char string2[] = "yo! give me back my money";
    printf("%d\n", myFunc(string));
    printf("%d\n", myFunc(string2));
}