#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
���� ������ ������� ������ ����� 4*4, ����� ����� ������ �������
�� ���� ������� ����� ����� ������� �����
*/
#define N 4
void main()
{
	int mat[N][N], i, j;
	//����� ����� ���� �������
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("Please enter a number to cell [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	//����� ������� �����
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == j)
				printf("%d  ", mat[i][j]); //����� ���� 
			else
				printf("  "); //����� ����
		}
		printf("\n");
	}

	printf("\n--------------------\n");

	//����� ������� �����
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i + j == N - 1)
				printf("%d  ", mat[i][j]); //����� ���� 
			else
				printf("  "); //����� ����
		}
		printf("\n");
	}
}
