#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *func(char *str)
{
	int size = strlen(str), i, j;
	char *new_str;

	//����� ������ ��� �� ������, ����� �������
	for (i = 0; i < size; i++)
	{
		if (str[i] != ' ' && !(str[i] >= '0' && str[i] <= '9') && !(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
			return NULL;
	}

	//����� �� ������ ���� ����� ��� ��� ������
	new_str = (char*)malloc(size * sizeof(char));

	//����� ������ �� ��� ������ ����� ���� �����
	for (i = 0; i < size; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z') //��� ���� ������� ����
			new_str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ') //���� ������� ���� �� ��� ����
			new_str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && str[i - 1] == ' ') //���� ������� ���� �� ��� �����
			new_str[i] = str[i];
		else if (str[i] >= 'A' && str[i] <= 'Z' && i != 0) //���� ������ ����� �� ������ ������
			new_str[i] = str[i] + 32;
		else
			new_str[i] = str[i];
	}

	//����� ����� �������
	new_str[i] = NULL;

	return new_str;
}


void main()
{
	puts(func("C EXaM question 4 SUMMER 2017"));
}