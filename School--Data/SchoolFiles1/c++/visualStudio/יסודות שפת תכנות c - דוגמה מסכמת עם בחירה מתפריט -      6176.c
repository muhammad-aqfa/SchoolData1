/*
יש להציג תפריט עד שהמשתמש ייצא ממנו על ידי בחירה במספר המתאים.
התפריט יכלול את האפשרויות הבאות:
1. יצירה מערך
2. הוספה של איבר אחד למערך - יש לשאול אותו האם הוא מעוניין לקלוט עוד מספר עד שיזין שלא
3. הדפסת כל המערך מהתחלה לסוף - באמצעות פונקציה
4. הדפסת כל המערך מהסוף להתחלה - באמצעות פונקציה
5. יציאה
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//פונקציה להדפסת התפריט
void printMenu() {
	printf("Choose one of the options:\n");
	printf("1. Create an array\n");
	printf("2. Add a number to the array\n");
	printf("3. Print the array from beginning to end\n");
	printf("4. Print the array from end to beginning\n");
	printf("5. Exit\n");
}

/*array => the pointer to the array / s => the size of the array*/
void printArrayFromTheBeginning(int *array, int s)
{
	int *p;
	for (p = array; p - array < s; p++)
	{
		printf("%d ", *p);
		//תנאי להדפסת חץ לאחר כל מספר למעט המספר האחרון במערך
		if (p - array < s - 1)
			printf("-> ");
		else
			printf("\n");
	}
}

/*array => the pointer to the array / s => the size of the array*/
void printfArrayFromTheEnd1(int *array, int s)
{
	int *p;

	//לולאה שמקדמת את המצביע עד לאיבר האחרון במערך
	for (p = array; p - array < s; p++);

	//לולאה שמדפיסה את המערך מהסוף להתחלה
	for (p--; p - array >= 0; p--)
	{
		printf("%d ", *p);
		//תנאי להדפסת חץ לאחר כל מספר למעט המספר האחרון במערך
		if (p - array > 0)
			printf("-> ");
		else
			printf("\n");
	}
}

/*array => the pointer to the array / s => the size of the array*/
void printfArrayFromTheEnd2(int *array, int s) {
	int *p;
	for ( p = array + (s - 1); p - array >= 0; p--)
	{
		printf("%d ", *p);
		//תנאי להדפסת חץ לאחר כל מספר למעט המספר האחרון במערך
		if (p - array > 0)
			printf("-> ");
		else
			printf("\n");
	}
}

void main()
{
	int choice = 0, *arr = NULL, size, num;
	char enter = 'y';
	do {
		printMenu();
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			if (arr != NULL)
				free(arr);
			size = 0;
			arr = (int*)malloc(size * sizeof(int));
			printf("Success!\n\n");
			break;
		case 2:
			if (arr == NULL) {
				printf("You need to allocate the array first!\n\n");
				system("@cls||clear"); //פקודה לניקוי הקונסולה 
			}
			else {
				do
				{
					printf("Please insert a number to the array: ");
					scanf("%d", &num);
					arr = (int*)realloc(arr, (size + 1) * sizeof(int));
					arr[size++] = num;

					printf("Do you want to insert another number? (y/n): ");
					fflush(stdin);
					rewind(stdin);
					scanf("%c", &enter);
				} while (enter != 'n' && enter != 'N');
				printf("Success!\n\n");
			}
			break;
		case 3:
			printArrayFromTheBeginning(arr, size);
			printf("Success!\n\n");
			break;
		case 4:
			//printfArrayFromTheEnd1(arr, size);
			printfArrayFromTheEnd2(arr, size);
			printf("Success!\n\n");
			break;
		default:
			break;
		}

	} while (choice != 5);

	//המשתמש בחר ב-5 ולכן צריך לצאת מהתוכנית
	if (arr != NULL)
		free(arr);
	printf("\nSee you soon...\n");
}