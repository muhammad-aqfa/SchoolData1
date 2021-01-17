#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
כתוב תוכנית המגדירה מטריצה בגודל 4*4, קולטת לתוכה מספרים ומדפיסה
את ערכי האלכסון הראשי וערכי האלכסון המשני
*/
#define N 4
void main()
{
	int mat[N][N], i, j;
	//קליטת ערכים לתוך המטריצה
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("Please enter a number to cell [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	//הדפסת האלכסון הראשי
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == j)
				printf("%d  ", mat[i][j]); //הדפסת הערך 
			else
				printf("  "); //הדפסת רווח
		}
		printf("\n");
	}

	printf("\n--------------------\n");

	//הדפסת האלכסון המשני
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i + j == N - 1)
				printf("%d  ", mat[i][j]); //הדפסת הערך 
			else
				printf("  "); //הדפסת רווח
		}
		printf("\n");
	}
}
