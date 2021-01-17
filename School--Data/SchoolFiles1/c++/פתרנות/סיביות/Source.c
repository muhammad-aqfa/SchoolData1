#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void main()
//{
//	unsigned char number, res, four_dight_is_zero, first_and_second_is_one, x, z;
//	scanf("%c", &number);
//	res = number & 10;
//	if (res == 0) {
//		printf("The value of the fith bit is 0\n\n");
//	}
//	else {
//		printf("The value of the fith bit is 1\n");
//	}
//	if (number & 1 == 0) {
//		printf("the number is even\n");
//	}
//	else {
//		printf("the number is odd\n");
//	}
//	//מאפסת את הסיבית הרביעית מימין
//	four_dight_is_zero = number & 0xF7;
//	printf("%x\n", four_dight_is_zero);
//	//מדליקה את הסיבית הראשונה והשנייה מימין
//	first_and_second_is_one = number | 0x03;
//	printf("%x\n", first_and_second_is_one);
//	//הופכת את הסיבית הרביעית והשישית מימין
//	x = number ^ 0x28;
//	printf("%x\n", x);
//	//הופכת את המספר כולן
//	z = ~number;
//	printf("%x\n", z);
//	//מאפסת את המספר בעזרת xor
//	number = number ^ number;
//	printf("%x\n", number);
//}
char* encode_str(char* str1, char num) {
	int  res, jumps;
	unsigned char number = num;
	char* new_str, SizeforNewStr = strlen(str1);
	new_str = (char*)malloc(SizeforNewStr * sizeof(char));
	for (int i = 0; i < strlen(str1); i++) {
		if (!(str1[i] >= 'a' && str1[i] <= 'z') && !(str1[i] >= 'A' && str1[i] <= 'Z') && !(str1[i] == ' ')) {
			return	NULL;
		}
	}
	int j = 0;
	for (int i = 0; i < strlen(str1);i++) {
		if (str1[i] != ' ') {
			if (j >= 0 && j <=7 ) {
				res = number & 0x01;
				printf(" %x \n", number);
			}
			else {
				number = num;
				res = number & 0x01;
				j =0;
			}
			if (res == 0 && (str1[i] >= 'd' && str1[i] <= 'z' ) || (str1[i] >= 'D' && str1[i] <= 'Z')) {
				new_str[i] = str1[i] - 3;
				printf(" %d ", -3);
			}
			else if ((res == 0 && str1[i] == 'a') || (res == 0 && str1[i] == 'b') || (res == 0 && str1[i] == 'c')) {
				new_str[i] = str1[i] - 3;
				jumps = 'a' - new_str[i];
				new_str[i] = 'z' - jumps + 1;
				printf(" %d ", -3);
			}
			else if ((res == 0 && str1[i] == 'A') || (res==0 && str1[i] == 'B') || (res==0 && str1[i] == 'C')) {
				new_str[i] = str1[i] - 3;
				jumps = 'A' - new_str[i];
				new_str[i] = 'z' - jumps + 1;
				printf(" %d ", -3);
			}
			else {
				if ((res == 1 && str1[i] >= 'a' && str1[i] <= 'w') || (res==1 && str1[i] >= 'A' && str1[i] <= 'W')) {
					new_str[i] = str1[i] + 3;
					printf(" %d ", 3);
				}
				else if ((res == 1 && str1[i] == 'x') || (res==1 && str1[i] == 'y' )|| (res==1 && str1[i] == 'z')) {
					new_str[i] = str1[i] + 3;
					jumps = new_str[i] - 'z';
					new_str[i] = 'a' + jumps - 1;
					printf(" %d ", 3);
				}
				else if ((res == 1 && str1[i] == 'X' )|| (res==1 && str1[i] == 'Y' )|| (res==1 && str1[i] == 'Z')) {
					new_str[i] = str1[i] + 3;
					jumps = new_str[i] - 'Z';
					new_str[i] = 'A' + jumps - 1;
					printf(" %d ", 3);
				}
			}
			number = number >> 1;
			j++;
		}
		else {
			new_str[i] = ' ';
		}
	}
	new_str[SizeforNewStr] = NULL;
	return new_str;
}
void main() {
	char *str = "Hello I am Fine",*str1;
	 unsigned char  num = 0x3a;
	 str1=encode_str(str, num);
	 printf("\n\n\n");
	 if (str1 != NULL) {
		 for (int i = 0; i < strlen(str1); i++)
		 {
			 printf(" %c ", str1[i]);
		 }
	 }
	 else {
		 printf("str1 is NULL ");
	 }
}
//void main()
//{
//	unsigned int pixel = 0x4Bb9D3, blue, green;
//	blue = pixel & 0xFF;
//	printf("hexa=%x decimal=%d\n", blue, blue);
//	//printf("hexa=%x decimal=%d\n", pixel & 0x000000FF);
//
//	//סעיף ב - דרך 1
//	green = (pixel & 0xFF00) >> 8;
//	printf("hexa=%x decimal=%d\n", green, green);
//	//printf("hexa=%x decimal=%d\n", (pixel & 0x0000FF00)>>8);
//
//	//סעיף ב' - דרך 2
//	green = (pixel >> 8) & 0xFF;
//	printf("hexa=%x decimal=%d\n", green, green);
//	//printf("hexa=%x decimal=%d\n", (pixel >>8)&0x000000FF;
//
//
//	//סעיף ג - דרך 1
//	green = (pixel & 0xFF0000) >> 16;
//	printf("hexa=%x decimal=%d\n", green, green);
//	//printf("hexa=%x decimal=%d\n", (pixel & 0x00FF0000)>>16);
//
//	//סעיף ג' - דרך 2
//	green = (pixel >> 16) & 0xFF;
//	printf("hexa=%x decimal=%d\n", green, green);
//	//printf("hexa=%x decimal=%d\n", (pixel >>8)&0x000000FF;
//
//	//סעיף ד' - איפוס הגוון הירוק
//	pixel = pixel & 0xFFFF00FF;
//	printf("hexa=%X\n", pixel);
//	pixel = pixel | 0x2D00;
//	//pixel |= 0x2D00;
//	printf("hexa=%X\n", pixel);
//
//	//ה' - מאפסים את הכחול והירוק
//	//דרך 1
//	//pixel = pixel & 0xFFFF0000;
//	//דרך 2
//	pixel = (pixel >> 16)<<16;
//	printf("hexa=%X\n", pixel);
//}
//unsigned char func(unsigned char num1, unsigned char num2) {
//	unsigned char res, lsb;
//	if (num1 == 0 && num2 == 0) {
//		return 0;
//	}
//	lsb = (num1 & 1) ^ (num2 & 1);
//	printf(" lsb = %d", lsb);
//	res = lsb | (func(num1 >> 1, num2 >> 1) << 1);
//	return res;
//}
//int main() {
//	char res;
//	/*res = func(0x23, 0x23);*/
//	/*printf(" \n %X ", res & 0xff);*/
//	res = func(0x23, 0x14);
//	printf(" \n %X ", res);
//	////res = func(0xaa, 0x55);
//}
//void func(char* i, char* j) {
//	*i = *i * *i;
//	*j = *j * *j;
//}
//int main()
//{
//	char a[] = { 58888,2 };
//	int k, j;
//	func(&a[0], &a[1]);
//	printf(" %d %d ", a[0], a[1]);
//	printf("\n\n ");
//	printf("sizeofa =%d  sizeof *a=%d",sizeof(a),sizeof(*a));
//	//25 4
//	//sizeofa = 8  sizeof * a = 4
////	/*a[0] = 0x10;
////	a[1] = a[0] << 8;
////	k = a[1] + a[0];
////	printf(" %X ", k);
////	a[0] = 0x10;
////	j = a[0] << 8;
////	k =j + a[0];
////	printf(" %X ", k);
//}

