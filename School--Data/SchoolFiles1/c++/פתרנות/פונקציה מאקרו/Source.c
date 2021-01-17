#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void main() {
//
//		int num1, num2, m;
//		printf("Enter two numbers\n");
//		scanf("%d%d", &num1, &num2);
//		//m = max(num1++, num2++);
//		//m = num1++ > num2++ ? num1++ : num2++;
//		if (num1++ > num2++)
//		{
//			m = num1++;
//		}
//		else
//		{
//			m = num2++;
//		}
//		printf(" n1=%d  n2=%d  m=%d ",num1,num2,m);
//
////}
//void main()
//{
//	char str[] = "52609", * ptr;
//	int i, x, num = 0;
//	for (i = 0; str[i]; i++)
//	{
//		x = str[i] - '0';
//		if (x % 2)
//			num = num * 10 + x;
//		else
//			printf("%c", str[i]);
//	}
//	printf("\n%d\n", num);
//	ptr = str + 1;
//	while (*ptr)
//	{
//		printf("%c", str[*ptr - '0']++);
//		ptr += 2;
//	}
//	printf("\n");
//	puts(str);
//	for (i = strlen(str) - 1; i; i--)
//	{
//		switch (str[i])
//		{
//		case '0': printf("%c", (str[i]++) + 3);
//		case '5': printf("%c", (--str[i]) + 2);
//			break;
//		default: printf("%c", str[i]--);
//			break;
//		}
//	}
//	printf("\n");
//	puts(str);
//}
//char* func_rec(char* str1, int n, char* str2)
//{
//	int new_n;
//	if (n == 0)
//	{
//		str1 = (char*)malloc(0);
//		return str1;
//	}
//	str1 = func_rec(str1, n - 1, str2);
//	new_n = n * 2;
//	str1 = (char*)realloc(str1, new_n * sizeof(char));
//	str1[new_n - 2] = str2[n - 1];
//	str1[new_n - 1] = ' ';
//	str1[new_n] = NULL;
//	printf(" %s ", str1);
//	return str1;
//}
//char* func(char* str1, char* str2)
//{
//	int n, i, j;
//	char* new_str = NULL, * big, * small;
//	if (strlen(str1) >= strlen(str2))
//	{
//		big = str1;
//		small = str2;
//	}
//	else
//	{
//		big = str2;
//		small = str1;
//	}
//	new_str = func_rec(new_str, strlen(big), big);
//	n = strlen(big) * 2;
//	for (i = 1, j = 0; i < n; i += 2)
//	{
//		if (j >= strlen(small))
//			j = 0;
//		new_str[i] = small[j] - 32;
//		j++;
//	}
//	new_str[i] = NULL;
//	return new_str;
//}
//void main()
//{
//	char str1[] = "number", str2[20] = "five", * new_str;
//	printf("%s %s\n", str1, str2);
//	printf(" %d ", strlen(str2));
//	new_str = func(str1, str2);
//	puts(new_str);
//}
//typedef struct node
//{
//	int number;
//	struct node* next;
//} Node;
//Node* func(int mat[N][N], int up_r, int up_c, int down_r,
//	int down_c, Node* list)
//{
//	int i, j;
//	Node* nptr, * tmp = NULL;
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 2; j++)
//		{
//			nptr = (Node*)malloc(sizeof(Node));
//			nptr->number = mat[i][j];
//			if (!list)
//				list = nptr;
//			else
//				tmp->next = nptr;
//			tmp = nptr;
//		}
//	}
//	tmp->next = NULL;
//	return list;
//}
//void main()
//{
//	int mat[N][N] = { {10, 4, 5, 30},
//	{12, 1, 23, 15},
//	{16, 7, 8, -9},
//	{2, 13, -5, 0} };
//	Node* list1 = NULL, * list2 = NULL, * list3 = NULL, * p;
//	list1 = func(mat, 1, 1, 2, 3, list1);
//	list2 = func(mat, 2, 0, 3, 1, list2);
//	list3 = func(mat, 0, 0, 2, 2, list3);
//	for (p = list1; p; p = p->next)
//		printf("%d -> ", p->number);
//	printf("NULL\n");
//	for (p = list2; p; p = p->next)
//	printf("%d -> ", p->number);
//	printf("NULL\n");
//	for (p = list3; p; p = p->next)
//		printf("%d -> ", p->number);
//	printf("NULL\n");
//}
//void func(int* A, int size, int* n, int* ind)
//{
//	int i, x, res = 1, start;
//	*n = *ind = 0;
//	x = A[0];
//	i = 0;
//	while (i < size - 1)
//	{
//		if (A[i] > x)
//			res++;
//		else
//		{
//			res = 1;
//			start = i;
//		}
//		if (res > * n)
//		{
//			*n = res;
//			*ind = start;
//		}
//		x = A[i];
//		i++;
//	}
//}
//void main()
//{
//	int arr1[] = { 1, 2, 3, -3, -1, 2, 3, 8, 9, 1 };
//	int arr2[] = { 10, 20, 30, 3, 4 };
//	int n, ind;
//	func(arr1, 10, &n, &ind);
//	printf("There is %d at %d\n", n, ind);
//	func(arr2, 5, &n, &ind);
//	printf("There is %d at %d\n", n, ind);
//}
//unsigned char func(unsigned char num)
//{
//	unsigned char x;
//	printf(" %x ", num);
	/*if (num == 0)
		return 0;
	x = num >> 1;
	if (And_1(num)) {
		printf("True  :  x=%d num=%d\n", (x), num);
		return ((func(x) << 2) + (x << 2) + 1);
	}
	else {
		printf("False :  x=%d num=%d\n", (x), num);
		return ((func(x)) << 2);
	}*/
//}
//void main()
//{
//	unsigned int i;
//	for (i = 44; i <= 44; i++) {
//		printf("num = %d res = %x\n ", i, func(i));
//	}
//}
//typedef struct node
//{
//	int key;
//	struct node* next;
//} Node;
//
//Node* reverese_list(Node* list)
//{
//	Node* prev = NULL, * current = list, * last = list->next;
//	while (current != NULL)
//	{
//		current->next = prev;
//		prev = current;
//		current = last;
//		if (last != NULL)
//			last = last->next;
//	}
//	return prev;
//}
//
//void print_list(Node* list)
//{
//	Node* ptr;
//
//	if (list == NULL)
//	{
//		printf("the list is empty\n\n");
//	}
//	else
//	{
//		for (ptr = list; ptr->next != NULL; ptr = ptr->next)
//		{
//			printf("%d --> ", ptr->key);
//		}
//		printf("%d --> NULL\n\n", ptr->key);
//	}
//}
//
//void main()
//{
//	Node* head = NULL, * new_node, * p;
//	int number;
//
//	printf("enter a number. to exit enter -1: ");
//	scanf("%d", &number);
//
//	while (number != -1)
//	{
//		new_node = (Node*)malloc(sizeof(Node));
//		new_node->key = number;
//		new_node->next = NULL;
//
//		if (head == NULL)
//			head = new_node;
//		else
//		{
//			for (p = head; p->next != NULL; p = p->next)
//			{
//
//			}
//			p->next = new_node;
//		}
//
//		printf("enter a number. to exit enter -1: ");
//		scanf("%d", &number);
//	}
//
//	print_list(head);
//	head = reverese_list(head);
//	print_list(head);
//}
//void main() {
//	int a, b,*c;
//	a = b = 2;
//	g(b, (f(a, b)));
//	printf("%d \n", b);
//	a = b = 2;
//	f(b, t(a))*b;
//	printf("%d \n",b);
//	b = 2;
//	a = 5;
//	c = &b;
//	b=*t(c*)b;
//	printf("%d", b);
//
//}
//void main() {
//	int a = 10, b = 8, c = 7;
//	//printf("The average OF %d  %d  %d is  %d \n ", a, b, c, AVG_3(a, b, c));
//	a <<= 1;
//	b >>= 1;
//	c ^= 1;
//	//printf("The average OF %d  %d  %d is  %d \n ", a, b, c, AVG_3(a, b, c));
//	printf("The average OF %d  %d  %d is  %d \n ", a, b, c, AVG_1(a, b, c));
//}
//typedef struct node
//{
//	int key;
//	struct node* next;
//} Node;
//
//Node* reverese_list(Node* list)
//{
//	Node* prev = NULL, * ptr;
//	int temp;
//	for (ptr = list; ptr != NULL; ptr = ptr->next) {
//		for (prev = ptr->next; prev != NULL; prev = prev->next) {
//			if (prev->key > ptr->key) {
//				temp = prev->key;
//				prev->key = ptr->key;
//				ptr->key = temp;
//			}
//		}
//	}
//	return list;
//}
//
//void print_list(Node* list)
//{
//	Node* ptr;
//
//	if (list == NULL)
//	{
//		printf("the list is empty\n\n");
//	}
//	else
//	{
//		for (ptr = list; ptr->next != NULL; ptr = ptr->next)
//		{
//			printf("%d --> ", ptr->key);
//		}
//		printf("%d --> NULL\n\n", ptr->key);
//	}
//}
//
//void main()
//{
//	Node* head = NULL, * new_node, * p;
//	int number;
//
//	printf("enter a number. to exit enter -1: ");
//	scanf("%d", &number);
//
//	while (number != -1)
//	{
//		new_node = (Node*)malloc(sizeof(Node));
//		new_node->key = number;
//		new_node->next = NULL;
//
//		if (head == NULL)
//			head = new_node;
//		else
//		{
//			for (p = head; p->next != NULL; p = p->next)
//			{
//
//			}
//			p->next = new_node;
//		}
//
//		printf("enter a number. to exit enter -1: ");
//		scanf("%d", &number);
//	}
//
//	print_list(head);
//	head = reverese_list(head);
//	print_list(head);
//}
//int func(char* s,char *t){
//	int i, flag = 0, s_len, t_len;
//	char temp[30], * ptr;
//	s_len = strlen(s);
//	t_len= strlen(t);
//	if (t_len <= s_len) {
//		for (i = 0; i < (s_len-t_len+1) && !flag; i++) {
//			strcpy(temp, s);
//			ptr = temp + i;
//		    temp[t_len + i] = NULL;
//			printf("ptr=%s\n", ptr);
//			if (0 == strcmp(ptr, t)) {
//				printf("ptr=%s t=%s ", ptr,t);
//				flag = 1;
//			}
//		}
//	}
//	if (flag) {
//		return i-1;
//	}
//	else {
//		return -1;
//	}
//}
//int main() {
//	char str[] = "question number 6";
//	printf("\n %d\n", func(str, "tio"));
//	//???
//	//ptr = que
//		//ptr = ues
//		//ptr = est
//		//ptr = sti
//		//ptr = tio
//		//ptr = tio t = tio
//		//4
//}
int  func(int num) {
	int vec[2], flag, i;
	vec[1] = 1;
	vec[0] = 0;
	flag = num;
	for (i = 1 ,flag=0; i <= 9; i++) {
		vec[flag] += vec[!flag];
	}
	return vec[flag];
}
int main() {
	int x;
	x = func(9);
		printf(" %d ", x);
}