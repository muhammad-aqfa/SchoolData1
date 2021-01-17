#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void main() {
//	int* p[3], temp, x[5] = { 3,45,6,7,-9 }, i;
//	temp = x[1];
//	p[0] = x;
//	p[1] = &temp;
//	p[2] = x+4;
//
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", *p[i]);
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d\n", *(p[0] + i));
//	}
//}
void main() {
	char *x[5] = { "hello","have","A","Good","Day" };
	int i, j;
	for (i = 0; i < 5; i++) {
		j = strlen(x[i]);
		printf("%c ", x[i][j-1]);
	}
	
}