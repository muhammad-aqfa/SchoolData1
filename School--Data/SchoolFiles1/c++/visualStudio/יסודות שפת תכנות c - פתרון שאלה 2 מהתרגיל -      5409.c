#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define R 3
#define C 2

void main()
{
	int mat[R][C], i, j, sum_total = 0, total_positive = 0, last_column_sum = 0, second_row_sum = 0;
	//���� � - ����� ������
	printf("1)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("Enter a number to cell [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	//���� � - ����� �������
	printf("\n2)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}

	//���� � - ����� ������� ������� ������� � - 10
	printf("\n\n3)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (mat[i][j] > 10)
				printf("%d  ", mat[i][j]);
		}
	}

	//���� � - ����� �������� �� ������� ������� ������� � - 10
	printf("\n\n4)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (mat[i][j] > 10)
				printf("[%d][%d]  ", i, j);
		}
	}

	//���� � - ����� ������� ������� �������
	printf("\n\n5)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (mat[i][j] % 2 == 0)
				printf("%d  ", mat[i][j]);
		}
	}

	//���� � - ����� ���� ������� �������
	printf("\n\n6)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			sum_total += mat[i][j];
		}
	}
	printf("sum total = %d", sum_total);

	//���� � - ����� ���� ������� ��������
	printf("\n\n7)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (mat[i][j] > 0)
				total_positive++;
		}
	}
	printf("total positive = %d", total_positive);

	//���� � - ����� ���� ����� �������
	printf("\n\n8)\n");
	for (i = 0; i < C; i++)
	{
		printf("%4d", mat[0][i]);
	}
	
	//���� � - ����� ���� ������ �������
	printf("\n\n9)\n");
	for (i = 0; i < R; i++)
	{
		printf("%4d", mat[i][C-1]);
		//��� ������ ���� � - ����� ���� ������� ������ �������
		last_column_sum += mat[i][C - 1];
	}

	//���� � - ����� ���� ������� ������ �������
	printf("\n\n10)\n");
	printf("%d", last_column_sum);

	//���� �� - ����� ���� ����� ������
	printf("\n\n11)\n");
	for (i = 0; i < C; i++)
	{
		second_row_sum += mat[1][i];
	}
	printf("%d", second_row_sum);

	//���� �� - ����� ������� �������
	printf("\n\n12)\n");
	for (i = 0; i < C; i++)
	{
		for (j = 0; j < R; j++)
		{
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
}