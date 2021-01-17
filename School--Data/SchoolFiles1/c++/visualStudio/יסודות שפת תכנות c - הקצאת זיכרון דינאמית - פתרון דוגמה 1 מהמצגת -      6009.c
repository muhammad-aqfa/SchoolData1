#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arr[10], i, j, *new_arr, count = 0;
	printf("Hello!\n");
	for (i = 0; i < 10; i++)
	{
		//����� ������ �����
		printf("Please enter a number to cell [%d]: ", i);
		scanf("%d", &arr[i]);

		//����� ������ �����
		if (arr[i] >= 0)
			count++;
	}

	//����� ����� �������
	new_arr = (int*)malloc(count * sizeof(int));

	//����� ������� ������
	if (!new_arr) //if(new_arr == NULL)
	{
		printf("ERROR");
		return;
	}

	//���� �� ����� ������ ������ ������� �������� ����� ����
	for (i = 0, j = 0; i < 10; i++)
	{
		if (arr[i] >= 0)
		{
			new_arr[j] = arr[i];
			j++;
		}
	}

	//���� ������� ������ ����
	for (j = 0; j < count; j++)
	{
		printf("new_arr[%d] = %d\n", j, new_arr[j]);
	}

	//����� �������
	free(new_arr);

	/*
		Hello!
		Please enter a number to cell [0]: 1
		Please enter a number to cell [1]: -100
		Please enter a number to cell [2]: 3
		Please enter a number to cell [3]: -17
		Please enter a number to cell [4]: -1
		Please enter a number to cell [5]: 0
		Please enter a number to cell [6]: 9
		Please enter a number to cell [7]: -50
		Please enter a number to cell [8]: -91
		Please enter a number to cell [9]: 6
		new_arr[0] = 1
		new_arr[1] = 3
		new_arr[2] = 0
		new_arr[3] = 9
		new_arr[4] = 6
		Press any key to continue . . .
	*/



}