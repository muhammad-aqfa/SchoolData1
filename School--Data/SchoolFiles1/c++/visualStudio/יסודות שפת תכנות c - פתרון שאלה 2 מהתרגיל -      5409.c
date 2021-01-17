#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define R 3
#define C 2

void main()
{
	int mat[R][C], i, j, sum_total = 0, total_positive = 0, last_column_sum = 0, second_row_sum = 0;
	//סעיף א - קליטת מספרים
	printf("1)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("Enter a number to cell [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	//סעיף ב - הדפסת המטריצה
	printf("\n2)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}

	//סעיף ג - הדפסת המספרים במטריצה שגדולים מ - 10
	printf("\n\n3)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (mat[i][j] > 10)
				printf("%d  ", mat[i][j]);
		}
	}

	//סעיף ד - הדפסת המיקומים של המספרים במטריצה שגדולים מ - 10
	printf("\n\n4)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (mat[i][j] > 10)
				printf("[%d][%d]  ", i, j);
		}
	}

	//סעיף ה - הדפסת המספרים הזוגיים במטריצה
	printf("\n\n5)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (mat[i][j] % 2 == 0)
				printf("%d  ", mat[i][j]);
		}
	}

	//סעיף ו - הדפסת סכום המספרים במטריצה
	printf("\n\n6)\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			sum_total += mat[i][j];
		}
	}
	printf("sum total = %d", sum_total);

	//סעיף ז - הדפסת כמות המספרים החיוביים
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

	//סעיף ח - הדפסת אברי השורה הראשונה
	printf("\n\n8)\n");
	for (i = 0; i < C; i++)
	{
		printf("%4d", mat[0][i]);
	}
	
	//סעיף ט - הדפסת אברי העמודה האחרונה
	printf("\n\n9)\n");
	for (i = 0; i < R; i++)
	{
		printf("%4d", mat[i][C-1]);
		//חלק מפתרון סעיף י - חישוב סכום המספרים בעמודה האחרונה
		last_column_sum += mat[i][C - 1];
	}

	//סעיף י - חישוב סכום המספרים בעמודה האחרונה
	printf("\n\n10)\n");
	printf("%d", last_column_sum);

	//סעיף יא - הדפסת סכום השורה השנייה
	printf("\n\n11)\n");
	for (i = 0; i < C; i++)
	{
		second_row_sum += mat[1][i];
	}
	printf("%d", second_row_sum);

	//סעיף יב - הדפסת המטריצה משוחלפת
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