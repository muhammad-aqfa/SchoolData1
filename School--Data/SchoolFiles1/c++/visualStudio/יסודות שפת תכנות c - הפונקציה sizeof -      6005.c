//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void main()
//{
//	int a, b, c[10], i;
//	printf("Please enter the first number: ");
//	scanf("%d", &a);
//
//	printf("Please enter the second number: ");
//	scanf("%d", &b);
//
//	for (i = 0; i < sizeof(c) / sizeof(c[0]); i++)
//	{
//		c[i] = a++ * b++;
//	}
//
//	//for (i = 0; i < sizeof(c) / sizeof(c[0]); a--, b--, i++);
//
//	/*for (i = 0; i < sizeof(c) / sizeof(c[0]); i++)
//	{
//		printf("%d * %d = %d\n", a++, b++, c[i]);
//	}*/
//
//	for (i = sizeof(c) / sizeof(c[0]) - 1; i >=0 ; i--)
//	{
//		printf("%d * %d = %d\n", --a, --b, c[i]);
//	}
//
//}