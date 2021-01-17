#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *func(char *str)
{
	int size = strlen(str), i, j;
	char *new_str;

	//לולאה שבודקת שיש רק רווחים, ספרות ואותיות
	for (i = 0; i < size; i++)
	{
		if (str[i] != ' ' && !(str[i] >= '0' && str[i] <= '9') && !(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
			return NULL;
	}

	//הקצאה של מחרוזת חדשה בגודל זהה לזו שנקלטה
	new_str = (char*)malloc(size * sizeof(char));

	//לולאה שהופכת כל אות ראשונה במילה לאות גדולה
	for (i = 0; i < size; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z') //האם האות הראשונה קטנה
			new_str[i] = str[i] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ') //בודק שבתחילת מילה יש אות קטנה
			new_str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && str[i - 1] == ' ') //בודק שבתחילת מילה יש אות גדולה
			new_str[i] = str[i];
		else if (str[i] >= 'A' && str[i] <= 'Z' && i != 0) //בודק שבהמשך המילה יש אותיות גדולות
			new_str[i] = str[i] + 32;
		else
			new_str[i] = str[i];
	}

	//סימון לסיום המחרוזת
	new_str[i] = NULL;

	return new_str;
}


void main()
{
	puts(func("C EXaM question 4 SUMMER 2017"));
}