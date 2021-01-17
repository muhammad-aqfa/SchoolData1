#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void main() {

	//int i, num, *p, size;
	//scanf("%d", &size);
	//p = (int*)malloc(size * sizeof(int));
	//for (i = 0; i < size; i++) {
	//	scanf("%d", &num);
	//	p[i] = num;
	//}
	//p = (int*)realloc(p, (size + 3) * sizeof(int));
	//p[size] = 1;
	//p[size + 1] = 2;
	//p[size + 2] = 3;
	//for (i = 0; i < size + 3; i++) {
	//	printf("%d ", p[i]);
	//}
	//int i, num = 10, * p, size, j;
	//scanf("%d", &size);
	//p = (int*)malloc(size * sizeof(int));
	//for (i = 0; i < size; i++) {
	//	p[i] = num++;
	//}
	//p = (int*)realloc(p, (size * 2) * sizeof(int));
	//for (i = 0, j = size; j < size * 2; j++, i++) {
	//	p[j] = p[i];
	//}
	//for (i = 0; i < size * 2; i++) {
	//	printf(" %d ", p[i]);
	//}
	//int i, *p, size, *array_zoge,*array_notZoge,num, size_j=0, size_n = 0;
	//printf("please enter size \n ");
	//scanf("%d", &size);
	//p = (int*)malloc(size * sizeof(int));
	//array_zoge = (int*)malloc(size_j * sizeof(int));
	//array_notZoge = (int*)malloc(size_n * sizeof(int));
	//printf("please enter num:");
	//for (i = 0; i < size; i++) {
	//	scanf("%d", &num);
	//	p[i] = num;
	//	if (num % 2 == 0) {
	//		array_zoge = (int*)realloc(array_zoge, ++size_j * sizeof(int));
	//		array_zoge[size_j -1] = num;
	//	}
	//	else {
	//		array_notZoge = (int*)realloc(array_notZoge, ++size_n * sizeof(int));
	//		array_notZoge[size_n - 1] = num;
	//	}
	//}
	//for (i = 0; i < size; i++) {
	//	printf(" %d ", p[i]);
	//}
	//printf("\n");
	//for (i = 0; i < size_j; i++) {
	//	printf(" %d ", array_zoge[i]);
	//}
	//printf("\n");
	//for (i = 0; i < size_n; i++) {
	//	printf(" %d ", array_notZoge[i]);
	//}
//int *func(int size) {
//	int *p,num=1,i;
//	p = (int*)malloc(size * sizeof(int));
//	for (i = 0; i < size; i++) {
//		p[i] = num++;
//	}
//	return p;
//}
//void main() {
//	int size, * x, i;
//	printf("please enter size :");
//	scanf("%d", &size);
//	x = func(size);
//	for (i = 0; i < size; i++) {
//		printf(" %d ", x[i]);
//	}
//}
//int* excellent(int grades[], int size) {
//	int i, * grade_array, new_size = 0;
//	grade_array = (int*)malloc(new_size * sizeof(int));
//	for (i = 0; i < size; i++) {
//		if (grades[i] > 90) {
//			++new_size;
//			grade_array = (int*)realloc(grade_array, (new_size) * sizeof(int));
//			grade_array[new_size - 1] = grades[i];
//		}
//	}
//		grade_array = (int*)realloc(grade_array,(new_size+3) * sizeof(int));
//		grade_array[new_size] = 1;
//		grade_array[new_size+1] = '-';
//		grade_array[new_size+2] = 1;
//		printf("\n");
//		for (i = 0; i < new_size+3; i++) {
//			if (grade_array[i]== '-') {
//				printf("%c", grade_array[i]);
//			}
//			else {
//				printf(" %d ", grade_array[i]);
//			}
//		}
//		return grade_array;
//}
//void main() {
//	int size, *n, i, grade,p;
//	int *array;
//	printf("please enter size :");
//	scanf("%d", &size);
//	array = (int*)malloc(size * sizeof(int));
//	printf("Enter the Grade :");
//	for (i = 0; i < size; i++) {
//		scanf("%d",&grade);
//		if (grade >= 0 && grade <= 100) {
//			array[i] = grade;
//		}
//		else {
//			return 0;
//		}
//	}
//	printf(" \n array is  :");
//	for (i = 0; i < size; i++) {
//		printf(" %d ",array[i]);
//	}
//	n = excellent(array, size);
//}
//int *excellent(int grades[]) {
//	int i, * grade_array, new_size = 0;
//	grade_array = (int*)malloc(new_size * sizeof(int));
//	for (i = 0; i < 15; i++) {
//		if (grades[i] > 90) {
//			++new_size;
//			grade_array = (int*)realloc(grade_array,new_size * sizeof(int));
//			grade_array[new_size - 1] = grades[i];
//		}
//	}
//	return grade_array;
//}
//void main() {
//	int  *n, i, grade,count=0;
//	int array[15];
//	n = (int*)malloc(count * sizeof(int));
//	printf(" Enter the Grade :");
//	for (i = 0; i < 15; i++) {
//		scanf("%d", &grade);
//		if (grade >= 0 && grade <= 100) {
//			array[i] = grade;	
//			if (grade > 90) {
//				++count;
//				n = (int*)realloc(n, count * sizeof(int));
//			}
//		}
//		else {
//			return 0;
//		}
//	}
//	n = excellent(array);
//	for (i = 0; i < count; i++) {
//		printf(" %d ", n[i]);
//	}
//}
//int *excellent(char string[]) {
//	int size;
//	char *string2;
//	size = strlen(string);
//	string2 = (int*)malloc(size * sizeof(int));
//	for (int i = 0; i < size; i++) {
//		if (string[i] == ' ') {
//			string2[i] = '!';
//		}
//		if ((string[i] >= 'a' && string[i] < 'z')||(string[i] >= 'A' && string[i] < 'Z')) {
//			string2[i] = string[i] + 1;
//		}
//		if (string[i] == 'z' || string[i] == 'Z') {
//			string2[i] = string[i] - 25;
//		}
//	}
//	return string2;
//}
//void main() {
//	int i,count;
//	char *string = "I AM GOING TO THE ZOO",*n;
//	count = strlen(string);
//	n = (int*)malloc(count * sizeof(int));
//	n = excellent(string);
//	for (i = 0;i < count;i++) {
//		printf(" %c ",n[i]);
//	}
//}
