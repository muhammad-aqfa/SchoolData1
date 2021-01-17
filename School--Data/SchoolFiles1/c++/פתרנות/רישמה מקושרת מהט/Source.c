#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//typedef struct node {
//	int num;
//	struct node* next1;
//	struct node* next2;
//}Node;
//Node* func(int num1[]) {
//	int i = 0, max = num1[0], min = num1[0];
//	Node* head = NULL;
//	Node *p1, *p2, *ptr;
//	Node *new_node;
//	for (i = 0; i < 10; i++) {
//		new_node = (Node*)malloc(sizeof(Node));
//		new_node->num = num1[i];
//		new_node->next1 = NULL;
//		new_node->next2 = NULL;
//
//		if (head == NULL)
//		{
//			new_node->next2 = new_node;
//			head = new_node;
//		}
//		else
//		{
//			for (p1 = head; p1->next1 != NULL; p1 = p1->next1);
//			p1->next1 = new_node;
//
//			if (num1[i] > max) {
//				max = num1[i];
//				for (ptr = head; ptr->next2 != NULL; ptr = ptr->next2)
//					ptr->next2 = new_node;
//			}
//
//			//min
//		}
//	}
//	return head;
//}
//void main() {
//	int num[10] = { 5, 6, 8, 1, 3, 12, 43, 7, 3, 2 };
//	Node* x, * p;
//	x = func(num);
//	for (p = x; p != NULL; p = p->next1) {
//		printf("%d ", p->num);
//	}
//}
//Node* func(Node *head, int num) {
//	Node* new_node;
//    Node *p;
//	new_node = (Node*)malloc(sizeof(Node));
//	new_node->num = num;
//	new_node->next1 = NULL;
//	if (head == NULL)
//	{
//	head = new_node;
//	}
//	for (p = head; p->next1 != NULL; p = p->next1);
//	new_node->num = num;
//	return head;
//}
//typedef struct node {
//	int key;
//	struct node* next1;
//}Node;
//Node* func(Node* head) {
//	Node* p, *odd = NULL, *even = NULL, *p_even, *p_odd, *new_node;
//	for (p = head; p->next1 != NULL; p = p->next1)
//	{
//		new_node = (Node*)malloc(sizeof(Node));
//		new_node->key = p->key;
//		new_node->next1 = NULL;
//
//		if (new_node->key % 2 == 0) {
//			if (even == NULL)
//				even = new_node;
//			else 
//			{
//				for(p_even = even; p_even->next1 != NULL; p_even = p_even->next1);
//				p_even->next1 = new_node;
//			}
//		}
//		else {
//			if (odd == NULL)
//				odd = new_node;
//			else
//			{
//				for (p_odd = odd; p_odd->next1 != NULL; p_odd = p_odd->next1);
//				p_odd->next1 = new_node;
//			}
//		}
//	}
//
//	for (p = odd; p->next1 != NULL; p = p->next1);
//	p->next1 = even;
//
//	return odd;
//}
//void main() {
//	Node* head = NULL, * p, * New_node = NULL;
//
//	int num1[] = { 4,1,6,8,5,3,2 };
//	for (int i = 0; i < 7; i++) {
//		New_node = (Node*)malloc(sizeof(Node));
//		New_node->key = num1[i];
//		New_node->next1 = NULL;
//		if (head == NULL) {
//			head = New_node;
//		}
//		else {
//			for (p = head; p->next1 != NULL; p = p->next1) {}
//			p->next1 = New_node;
//		}
//	}
//
//	for (p = head; p->next1 != NULL; p = p->next1)
//	{
//		printf("%d ", p->key);
//	}
//	printf("\n\n");
//
//	head = func(head);
//
//	for (p=head; p != NULL; p=p->next1)
//	{
//		printf("%d ", p->key);
//	}
//}
//typedef struct node {
//	int num;
//	struct node* next1;
//}Node;
//Node *func(Node *head1, Node *head2) {
//	Node * p, * x;
//	int sum1=0,sum2=0;
//	printf("\n \n ");
//	for (p = head1; p!=NULL; p = p->next1) {
//		sum1 += p->num;
//	}
//	printf("\n\n");
//	for (x = head2; x != NULL; x = x->next1) {
//		sum2 += x->num;
//	}
//	if (sum2 > sum1) {
//		for (x = head2; x->next1 != NULL; x = x->next1);
//		x->next1 = head1;
//		for (x = head1; x->next1 != NULL; x = x->next1);
//		x->next1 = head2;
//		return head2;
//	}
//	else if (sum2 < sum1) {
//		for (p = head1; p->next1 != NULL; p = p->next1);
//		p->next1 = head2;
//		for (p = head1; p->next1 != NULL; p = p->next1);
//		p->next1 = head1;
//		return head1;
//	}
//	else {
//		for (p = head1; p->next1 != NULL; p = p->next1);
//		p->next1 = head2;
//		for (p = head1; p->next1 != NULL; p = p->next1);
//		p->next1 = head1;
//		return head1;
//	}
//}
//void main() {
//	Node *head1=NULL, * head2=NULL,*p,*new_node1,*new_node2,*x;
//	int array1[] = { 2,4,3,5,6,7 };
//	int array2[] = {7,8,9,6 };
//	for (int i = 0; i < 6; i++) {
//		new_node1 = (Node*)malloc(sizeof(Node));
//		new_node1->num = array1[i];
//		new_node1->next1 = NULL;
//		if (head1 == NULL) {
//			head1 = new_node1;
//		}
//		else {
//			for (p = head1; p->next1!= NULL; p = p->next1);
//			p->next1 = new_node1;
//		}
//	}
//	for (int i = 0; i < 4; i++) {
//		new_node2 = (Node*)malloc(sizeof(Node));
//		new_node2->num = array2[i];
//		new_node2->next1 = NULL;
//		if (head2 == NULL) {
//			head2 = new_node2;
//		}
//		else {
//			for (x = head2; x->next1 != NULL; x = x->next1);
//			x->next1 = new_node2;
//		}
//	}
//	x=func(head1, head2);
//	for (p = x; p->next1 != x; p = p->next1)
//		printf("%d --> ",p->num);
//	printf("%d ", p->num);
//	
//}


//typedef struct node {
//	int num;
//	struct node* next;
//}Node;

//Node* jump(Node* ptr, int step)
//{
//	for (int i = 0; i < step; i++) {
//		ptr = ptr->next;
//	}
//	return ptr;
//}
//
//int func(Node *head) {
//	Node* ptr;
//	int numberofjumps=0, step = 0;
//	ptr = head;
//
//	do {
//		step = ptr->num;
//		numberofjumps++;
//		ptr = jump(ptr, step);
//	} while (ptr != head);
//	
//	return numberofjumps;
//}
//
//void main() {
//	Node *head=NULL,*new_node,*p;
//	int array[] = {2,3,1,4,5,6,7};// { 8, 3, 1, 4, 5, 6, 7 };
//	int x;
//	for (int i = 0; i < 7; i++) {
//		new_node = (Node*)malloc(sizeof(Node));
//		new_node->num = array[i];
//		new_node->next = NULL;
//		if (head == NULL) {
//			head = new_node;
//		}
//		else {
//			for (p = head; p->next != NULL; p = p->next);
//			p->next = new_node;
//		}
//	}
//	for (p = head; p->next != NULL; p = p->next);
//	p->next = head;
//	x=func(head);
//	printf(" %d ", x);
//}
typedef struct node {
	int key;
	struct node *next;
}Node;
Node *move_min_max(Node* head) {
	Node  *ptr, * prev,*new_node,*temp=NULL,*temp2=NULL;
	int max = head->key, min = head->key;
	printf("the list before \n:");
	for (ptr = head;ptr != NULL;ptr = ptr->next) {
		printf("%d-->", ptr->key);
	}
	printf("\n");
	for (ptr = head; ptr!=NULL; ptr = ptr->next) {
		if (min > ptr->key) {
			min = ptr->key;
		}
		if (max < ptr->key) {
			max = ptr->key;
		}
	}
	for (ptr = prev = head; ptr != NULL; prev = ptr, ptr = ptr->next)
	{
		
	}
	printf("\n the list after \n:");
	for (ptr = head; ptr != NULL; ptr = ptr->next) {
		printf("%d-->", ptr->key);
	}
}
void main() {
	int number = 0;
	Node* head = NULL, * ptr, * new_node = NULL, * prev;
	while (number >= 0) {
		new_node = (Node*)malloc(sizeof(Node));
		new_node->key = number;
		new_node->next = NULL;
		if (head == NULL) {
			head = new_node;
		}
		else {
			for (ptr = head; ptr->next != NULL; ptr = ptr->next);
			ptr->next = new_node;
		}
		scanf("%d", &number);
	}
		move_min_max(head);
}




