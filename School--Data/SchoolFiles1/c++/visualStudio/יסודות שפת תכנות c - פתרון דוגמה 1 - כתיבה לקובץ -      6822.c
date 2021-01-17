#include <stdio.h>
#define N 4

void main()
{
    int i;
    FILE *f;
    char color[20];

    for (i = 0; i < N; i++)
    {
        printf("Enter a color: ");
        scanf("%s", color);
        f = fopen("Color.txt", "a");
        if (f == NULL)
        {
            printf("ERROR!!\n");
            return;
        }

        fprintf(f, "%s\n", color);
        fclose(f);
    }
}