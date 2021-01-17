#include <stdio.h>

void main()
{
    int counter[101] = {0}, grade, i, common=0, common_index;

    //A
    for (i = 0; i < 10; i++)
    {
        printf("Enter a grade: ");
        scanf("%d", &grade);
        counter[grade]++;
    }

    for (i = 100; i >= 0; i--)
    {
        printf("grade %d --> %d\n", i, counter[i]);
    }

    //B
    for (i = 0; i < 101; i++)
    {
        if(counter[i]>common)
        {
            common = counter[i];
            common_index = i;
        }
    }

    printf("common grade %d\n", common_index);
    
}