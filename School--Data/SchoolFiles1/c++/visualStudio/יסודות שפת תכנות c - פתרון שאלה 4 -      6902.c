#include <stdio.h>
int saddle_point(int A[3][3],int B[3][3])
{
    int i,j,k,min,min1,max,max1,pos[2][2],pos1[2][2];
    for(i=0;i<3;i++)
    {
        min=A[i][0];
        for(j=0;j<3;j++)
        {
            if(min>=A[i][j])
            {
                min=A[i][j];
                pos[0][0]=i;
                pos[0][1]=j;
            }
        }
        j=pos[0][1];
        max=A[0][j];
        for(k=0;k<3;k++)
        {
            if(max<=A[k][j])
            {
                max=A[i][j];
                pos[1][0]=k;
                pos[1][1]=j;
            }
        }
        if(min==max)
        {
            if(pos[0][0]==pos[1][0]&&pos[0][1]==pos[1][1])
                printf("matrix A : saddle point %d at index [%d,%d]\n",max,pos[0][0],pos[0][1]);
        }
    }

        for(i=0;i<3;i++)
    {
        min1=B[i][0];
        for(j=0;j<3;j++)
        {
            if(min1>=B[i][j])
            {
                min1=B[i][j];
                pos1[0][0]=i;
                pos1[0][1]=j;
            }
        }
        j=pos1[0][1];
        max1=B[0][j];
        for(k=0;k<3;k++)
        {
            if(max1<=B[k][j])
            {
                max1=B[i][j];
                pos1[1][0]=k;
                pos1[1][1]=j;
            }
        }
        if(min1==max1)
        {
            if(pos1[0][0]==pos1[1][0]&&pos1[0][1]==pos1[1][1])
                printf("matrix B : saddle point %d at index [%d,%d]\n",max1,pos1[0][0],pos1[0][1]);
        }
    }

    if(pos[0][0]==pos1[0][0]&&pos[0][1]==pos1[0][1])
        return 1;
    else
        return 0;
}

void main()
{
    int res;
    int A[3][3]={{1,2,3},
                {4,5,6},
                {7,8,9}};

    int B[3][3]={{1,2,3},
                 {4,5,6},
                 {10,6,7}};
                

    saddle_point(A,B);
}