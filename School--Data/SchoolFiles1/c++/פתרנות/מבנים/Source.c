#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	int numberstudent;
	char Sname[10];
	int Grade_C;
	int Grade_Html;
	int Grade_Math;
} person;
void main() {
	person x;
	int i = 0;
	//gets(x.Sname);
	 strcpy(x.Sname,"muhammad");
	 x.Grade_C = 100;
	 x.Grade_Html = 87;
	 x.Grade_Math = 90;
	 float average=( x.Grade_C +x.Grade_Math+ x.Grade_Html) /3;
	 printf("%.1f", average);
}