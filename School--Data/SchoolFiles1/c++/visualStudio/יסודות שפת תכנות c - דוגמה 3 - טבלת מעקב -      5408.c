#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define R 3
#define C 4
void main()
{
	int mat[R][C] = { { 1, 634, -85,4 },{ -5, 6, 2,62 },{ 51234, 7,43,2 } }, i, j;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%7d", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n-------------------\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C - 1; j++)
		{
			mat[i][j] = mat[i][j + 1];
		}
		mat[i][C - 1] = 0;
	}
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%7d", mat[i][j]);
		}
		printf("\n");
	}
}

