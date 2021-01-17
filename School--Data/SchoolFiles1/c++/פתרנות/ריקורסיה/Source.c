#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void func(char* s) {
//	char temp;
//	int z;
//	if (*s != ' ' && *s != '\0') {
//		for (z = 0; s[z] != ' '; z++);
//			z--;
//			temp = *s;
//			*s = *(s + z);
//			*(s + z) = ' ';
//			func(s + 1);
//			*(s + z) = temp;
//
//	}
//}
//void main()
//{
//	char st[] = "Hello world!";
//	puts(st);
//	func(st);
//	puts(st);
//	strcpy(st, st + 6);
//	puts(st);
//	func(st);
//	puts(st);
//}
//int func(int n) {
//	if (n<=1) {
//		return 0;
//	}
//	else {
//		return  func(n - 1)+n;
//	}
//}
//void main()
//{
//	int a;
//	a = func(5);
//	printf(" %d \n", a);
//} 
//void func(char* n) {
//	if ((*n) == '\0') {
//		return ;
//	}
//	/*if (*n >= 'A' && *n <= 'Z') {
//		printf(" %c  ", *n);
//	}*/
//	n++;
//	func(n);
//	if (*n >= 'A' && *n <= 'Z') {
//		printf(" %c  ", *n);
//	}
//}
//void main()
//{
//	char *n = "AbCDe";
//	func(n);
//}
//int f(int n)
//{
//	if (n == 0)
//		return 0;
//	return (n % 10) + f(n / 10);
//}
//void main()
//{
//	int n = 5847, res;
//	res = f(n);
//	printf("%d %d\n", n, res);
//}
//int sum_dights(int number)
//{
//	if (number < 0) {
//		return 0;
//	}
//	if (number == 0) {
//		return 0 ;
//	}
//	return number % 10 + sum_dights(number / 10);
//}
//int find_sum_two_dights(int* array, int size, int full_size) {
//
//
//	if (n == 0)
//		return 0;
//	return (n % 10) + f(n / 10);
//}
//void main() {
//	int number = 3569;
//	int array[] = {45,67,89,12,37};
//	printf("%d \n \n", number);
//	number=sum_dights(number);
//	printf("%d", number);
//}
//int sum_dights(int number)
//{
//	if (number <= 0) {
//		return 0;
//	}
//	return number % 10 + sum_dights(number / 10);
//}
//int find_sum_two_dights(int *array, int size, int full_size)
//{
//	int static max = 0;
//	int static index=0;
//	int sum;
//	if (!size) {
//		printf(" max is %d", max);
//		sum = index;
//		return sum;
//	}
//	sum=sum_dights(array[size - 1]);
//	if (sum > max) {
//		max = sum;
//		index = size - 1;
//	}
//	return find_sum_two_dights(array, size - 1, full_size);
//	printf("  %d  ", max);
//}
//void main()
//{
//	int array[] = { 45,67,89,12,37 };
//	int place;
//	int size =5,full_size=5;
//    place= find_sum_two_dights(array,size,full_size);
//	printf("  \n place=%d", place);
//}
////אין לי מוסג  
typedef struct node {
	int num;
	struct node* next;
}Node;
Node *func(Node *head) {
	int tmp;
	Node* prev, * ptr;
	ptr = head;
	if (!ptr || !ptr->next) 
		return ;
	for (prev = head; ptr->next != NULL; prev = ptr, ptr = ptr->next);
		tmp = head->num;
		head->num = ptr->num;
		ptr->num = tmp;
		prev->next = NULL;
		printf("  %d %d", ptr->num, head->num);
		func(head->next);
		printf("  %d %d", ptr->num, head->num);
		prev->next = ptr;
		//return head;*/
}
void main() {
	Node  *head = NULL, * new_node, * p;
	int array[] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 6; i++) {
		new_node = (Node*)malloc(sizeof(Node));
		new_node->num = array[i];
		new_node->next = NULL;
		if (head == NULL) {
			head = new_node;
		}
		else {
			for (p = head; p->next != NULL; p = p->next);
			p->next = new_node;
		}
	}
	func(head);
	printf("\n\n");
	//for (p = head; p->next!= NULL; p = p->next) {
	//	printf("%d ", p->num);
	//}
}
//void seq_req(char* str, int f) {
//	if (!(*str)) return;
//	if ((*str + 1) == *(str + 1)) {
//		f = 1;
//		seq_req(str + 1, f);
//		printf("%c", *str);
//	}
//	else {
//		if (f == 1) {
//			f = 0;
//			seq_req(str + 1, f);
//			printf("%c", *(str));
//		}
//		else {
//			seq_req(str + 1, f);
//		}
//	}
//}
//void main() {
//	char str[] = "13435679";
//	seq_req(str, 0);
//	return 0;
//}
//void main() 
//{
//	unsigned char number,res,four_dight_is_zero, first_and_second_is_one,x,z;
//	scanf("%c",&number);
//	res = number & 10;
//	if (res == 0) {
//		printf("The value of the fith bit is 0\n\n");
//	}
//	else {
//		printf("The value of the fith bit is 1\n");
//	}
//	if (number&1==0) {
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
//	printf("%x\n",z);
//	//מאפסת את המספר בעזרת xor
//	number = number ^ number;	
//	printf("%x\n", number);
//}
//int func(int  i, int  j) {
//	if (j < 1) {
//		return 1;
//	}
//	int res;
//	res=func(i,j - 1) * i;
//	return res;
//}
//int main()
//{
//	int x;
//	x=func(8,2);
//	printf("%d", x);
//}
