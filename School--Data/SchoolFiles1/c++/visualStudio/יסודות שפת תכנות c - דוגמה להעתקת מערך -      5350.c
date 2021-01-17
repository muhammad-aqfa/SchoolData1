#include <stdio.h>
#define N 5
void main()
{
    int A[N] = {2,11,43,32,10}, B[N] = {1,12,2,20,5}, C[N*2]; 
    int i;

    //אפשרות ראשונה - 2 לולאות אחת אחרי השנייה
    /*for(i=0;i<N;i++)
    {
        C[i] = A[i];
    }
    for(i=0; i<N; i++)
    {
        C[i+N] = B[i];
    }*/

    //אפשרות שנייה - לולאה אחת בלבד
    for(i=0; i<N; i++)
    {
        C[i] = A[i];
        C[i+N] = B[i];
    }

    for(i=0;i<N*2;i++)
        printf("%d ", C[i]);
}