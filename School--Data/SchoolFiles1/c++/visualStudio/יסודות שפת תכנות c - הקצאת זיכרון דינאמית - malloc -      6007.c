//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////תוכנית שמגדירה מערך בגודל הנקלט מהמשתמש
//void main()
//{
//	int size, *ptr, i;
//	printf("Please enter the size of the array: ");
//	scanf("%d", &size); //קליטת כמות התאים במערך
//	ptr = (int*)malloc(size*sizeof(int)); //הקצאת הזיכרון 
//	
//	//בדיקה שההקצאה הצליחה
//	if (ptr == NULL)
//		return;
//
//	for (i = 0; i < size; i++)
//	{
//		printf("please enter number in cell [%d]: ", i);
//		scanf("%d", &ptr[i]);
//	}
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%d\n", ptr[i]);
//	}
//
//
//}