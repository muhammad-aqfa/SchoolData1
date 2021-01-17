#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void main() {
//	char string1[50], string2[50], string3[50], string4[50],*New_string;
//	int i, size = 0;
//	New_string = (char*)malloc(size * sizeof(char));
//	printf("please enter string1: \n");
//	gets(string1);
//	printf("please enter string2: \n");
//	gets(string2);
//	printf("please enter string3: \n ");
//	gets(string3);
//	printf("please enter string4:");
//	gets(string4);
//	for (i = 0; string1[i]!= NULL; i++) {
//		if (string1[i] >= 'A' && string1[i] <= 'Z') {
//			New_string =(char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = string1[i] + 32;
//		}
//		else if (!(string1[i] >= 'A' && string1[i] <= 'Z') && !(string1[i] >= 'a' && string1[i] <= 'z')) {
//			New_string = (char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = '_';
//		}
//		else {
//			New_string = (char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = string1[i];
//		}
//	}
//	for (i = 0; string2[i] != NULL; i++) {
//		if (string2[i] >= 'A' && string2[i] <= 'Z') {
//			New_string = (char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = string2[i] + 32;
//		}
//		 else if (!(string2[i] >= 'A' && string2[i] <= 'Z') && !(string2[i] >= 'a' && string2[i] <= 'z')) {
//			New_string = (char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = '_';
//		}
//		else {
//			New_string = (char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = string2[i];
//		}
//	}
//	for (i = 0; string3[i] != NULL; i++) {
//		if (string3[i] >= 'A' && string3[i] <= 'Z') {
//			New_string = (char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = string3[i] + 32;
//		}
//		else if (!(string3[i] >= 'A' && string3[i] <= 'Z') && !(string3[i] >= 'a' && string3[i] <= 'z')) {
//			New_string = (char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = '_';
//		}
//		else {
//			New_string = (char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = string3[i];
//		}
//	}
//	for (i = 0; string4[i] != NULL; i++) {
//		if (string4[i] >= 'A' && string4[i] <= 'Z') {
//			New_string = (char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = string4[i] + 32;
//		}
//		else if (!(string4[i] >= 'A' && string4[i] <= 'Z') && !(string4[i] >= 'a' && string4[i] <= 'z')) {
//			New_string = (char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = '_';
//		}
//		else {
//			New_string = (char*)realloc(New_string, ++size * sizeof(char));
//			New_string[size - 1] = string4[i];
//		}
//	}
//		printf("%s", New_string);
//char* str_func(char* str, char ch, int num) {
//	char  *str2, * string,tav;
//	int size = 0, i;
//	string = (char*)malloc(size * sizeof(char));
//	for (i = 0; str[i] != NULL; i++) {
//		if (str[i] == ch && i <= num) {
//			continue;
//		}
//		else {
//			size = size + 1;
//			string = (char*)realloc(string, size * sizeof(char));
//			string[size - 1] = str[i];
//			string[size] = NULL;
//		}
//	}
//	if (num > i) {
//		return NULL;
//	}
//	return string;
//}
//void main(){
//	char str[] = "string for question two";
//	char * str2;
//	str2 = str_func(str,'o',17);
//	if (str2 == NULL) {
//		free(str2);
//		printf("%s",str2);
//	}
//	else {
//		for ( int i = 0; str2[i] != NULL; i++) {
//			printf("%c", str2[i]);
//		}
//	}
//}
//char* str_func(char* str, int start, int len) {
//	int size = 0, i, sizestr;
//	char* str2, * st3;
//	sizestr = strlen(str);
//	str2 = (char*)malloc(size * sizeof(char));
//	if (start > sizestr) {
//		str2 = (char*)realloc(str2, ++size * sizeof(char));
//		str2[size - 1] = NULL;
//		return str2;
//
//	}
//	for (i = 0; i < sizestr; i++) {
//		if (len + start < sizestr) {
//			if (i >= start && i < start + len) {
//				str2 = (char*)realloc(str2, ++size * sizeof(char));
//				str2[size - 1] = str[i];
//				if (i == start + len - 1) {
//					str2[size] = NULL;
//				}
//			}
//		}
//		if (len + start > sizestr) {
//			if (i >= start && i < sizestr) {
//				str2 = (char*)realloc(str2, ++size * sizeof(char));
//				str2[size - 1] = str[i];
//				if (i == sizestr-1) {
//					str2[size] = NULL;
//				}
//			}
//		}
//	}
//	return str2;
//}
//
//void main() {
//	int i = 0, x = 0, sizestr,start=9,len=6;
//	char str1[] = "question number two", * str2,*st3;
//	sizestr = strlen(str1);
//	st3 = (char*)malloc(x * sizeof(char));
//	str2 = str_func(str1, start,len);
//	for (i = 0; i < sizestr; i++) {
//		if (!(i >= start && i < start + len)) {
//			st3 = (char*)realloc(st3, (++x) * sizeof(char));
//			st3[x - 1] = str1[i];	
//				st3[x] = NULL;
//		}
//	}
//	strcpy(str1, st3);
//	printf("%s \n", str2);
//	printf("%s \n", str1);
//}
//??
//int* max_seq(int* vec, int size) {
//	int sizeofarray = 3, * vec1, sum = 0, firstplace, indexlen = 0;
//	vec1 = (int*)malloc(sizeofarray * sizeof(int));
//	for (int i = 0; i < size; i++) {
//		if (vec[i] > vec[i - 1]) {
//			indexlen++;
//			if (indexlen == 1) {
//				firstplace = i;
//			}
//		}
//		sum += vec[i];
//		if (vec[i] < vec[i - 1]) {
//			if (sum < 0) {
//				indexlen = 0;
//				sum = 0;
//			}
//			else {
//				indexlen++;
//			}
//		}
//	}
//	vec1[sizeofarray - 3] = firstplace;
//	vec1[sizeofarray - 2] = indexlen;
//	vec1[sizeofarray - 1] = sum;
//	vec1[sizeofarray] = NULL;
//	return vec1;
//}
//void main() {
//	int size = 10,i;
//	int vec[10] = { 1,2,3,4,-9,5,6,7,8,9 };
//	int *vec2;
//	vec2=max_seq(vec,10);
//	for (i = 0; i < 3; i++) {
//		printf("|%d|", vec2[i]);
//	}
//}
//char* func(char* str) {
//	int i = 0, j;	
//	int size = 0;
//	char* newstr;
//	for (i = 0; str[i] != NULL; i++) {
//		if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= '0' && str[i] <= '9') && !(str[i] == ' ')) {
//			return NULL;
//		}
//	}
//	newstr = (char*)malloc(size * sizeof(char));
//	for (i = 0; str[i] != NULL; i++) {
//		newstr = (char*)realloc(newstr, ++size * sizeof(char));
//		newstr[size - 1] = str[i];
//	}
//	newstr[size] = NULL;
//	for (i = 0; str[i] !=NULL; i++) {
//		if (i == 0 && str[i] >= 'a' && str[i] <= 'z'){
//			newstr[i] = str[i] - 32;
//		}
//		else if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z' ) {
//			newstr[i] = str[i]-32;
//		}
//		else if (str[i - 1] == ' ' && str[i] >= 'A' && str[i] <= 'Z') {
//			newstr[i] = str[i];
//		}
//		else if ( str[i] >= 'A' && str[i] <= 'Z' && i!=0) {
//			newstr[i] = str[i] + 32;
//		}
//		else {
//			newstr[i] = str[i];
//		}
//	}
//	return newstr;
//}
//int main() {
//	int size = 30;
//	char  *str,*str2;
//	str = (char*)malloc(size * sizeof(char));
//	printf("please enter Str:");
//	gets(str);
//	str2=func(str);
//	printf("%s", str2);
//}
char* func(char* str1, char* str2) {
	int size1, size2, size = 0, j,x=0;
	char *newstr,*tav;
	newstr = (char*)malloc(size * sizeof(char));
	size1 = strlen(str1);
	size2 = strlen(str2);
	for (int i = 0; i < size2; i++) {
		newstr = (char*)realloc(newstr, ++size * sizeof(char));
		newstr[size - 1] = str2[i];
	}
	if (size1 > size2) {
		for (int i = 0; i < size1; i++) {
			for (int j = 0; j < size2; j++) {
				if (str1[i] >= 'a' && str1[i] <= 'z' || str1[i] >= 'A' && str1[i] <= 'Z') {
					newstr = (char*)realloc(newstr, ++size * sizeof(char));
					newstr[size - 1] = str1[i]++;
					if (!(newstr[size-1] >= 'a' && newstr[size-1] <= 'z') && !( newstr[size-1] >= 'A' && newstr[size-1] <= 'Z')) {
						return 0;
					}
					else {
						newstr[size] = NULL;
					}
				}
				else {
					return 0;
				}		
			}
			if (newstr[size - 1] == str1[size1-1]) {
				break;
			}
		}
	}
	else {
		return 0;
	}
	return str1;
}
void main() {
	char str1[] = "adcdefgu", str2[] = "good",*x;
	x=func(str1, str2);
	
		printf("%s", x);
}
