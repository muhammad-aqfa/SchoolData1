#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 3 - ����� �������
//#define N 10
//void main() 
//{
//	int board[N][N], i,j;
//	for (i = 0; i < N; i++) //����� ���� �� ������ ������� 
//	{
//		for (j = 0; j < N; j++) //����� ���� �� ������� ��� ���� 
//		{
//			if ((i + j) % 2 == 0) //if(!(i+j)%2)
//			{
//				board[i][j] = 1;
//			}
//			else
//				board[i][j] = 0;
//		}
//	}
//
//	//����� ���� ������� ������ �� �� ������
//	for (i = 0; i < N; i++) //����� ���� �� ������ ������� 
//	{
//		for (j = 0; j < N; j++) //����� ���� �� ������� ��� ����
//		{
//			printf(" %d |", board[i][j]);
//		}
//		printf("\n----------------------------------------\n");
//	}
//}

/*
1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 |
----------------------------------------
0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 |
----------------------------------------
1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 |
----------------------------------------
0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 |
----------------------------------------
1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 |
----------------------------------------
0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 |
----------------------------------------
1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 |
----------------------------------------
0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 |
----------------------------------------
1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 |
----------------------------------------
0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 |
----------------------------------------
Press any key to continue . . .
*/






//���� 4 - ����� �������
#define N 4
void main() 
{
	int num, mat[N][N / 2], i, j;
	
	//����� ����� �������
	printf("Hi! Please enter numbers to the matrix\n");
	for ( i = 0; i < N; i++)
	{
		for ( j = 0; j < N/2; j++)
		{
			printf("[%d,%d] = ", i,j);
			scanf("%d", &mat[i][j]);
		}
	}

	//����� ���� 
	printf("Hello Again! Please enter the scalar value: ");
	scanf("%d", &num);

	//����� ������� �����
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N / 2; j++)
		{
			mat[i][j] *= num; //mat[i][j] = mat[i][j] * num;
		}
	}

	//����� ������� �����
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N / 2; j++)
		{
			printf(" %d |", mat[i][j]);
		}
		printf("\n----------\n");
	}

}

/*
Hi! Please enter numbers to the matrix
[0,0] = 6
[0,1] = 13
[1,0] = 23
[1,1] = 7
[2,0] = 8
[2,1] = 5
[3,0] = 22
[3,1] = 44
Hello Again! Please enter the scalar value: 2
12 | 26 |
----------
46 | 14 |
----------
16 | 10 |
----------
44 | 88 |
----------
Press any key to continue . . .
*/

