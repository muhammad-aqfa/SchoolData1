

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int x;
	struct node* prev;
	struct node* next;
}Node;

void doubly_insert_to_end(Node** head, Node **tail, int number)
{
	Node *p;
	//===============בניית הצומת החדשה
	Node *new_node;
	new_node = (Node*)malloc(sizeof(Node));
	new_node->x = number;
	new_node->next = NULL;
	//===================

	//===========================בדיקה האם הרשימה ריקה או לא
	if (*head == NULL)//אם הרשימה ריקה
	{
		*head = *tail = new_node;//ראש הרשימה וזנב הרשימה מקבלים את כתובתה של הצומת החדשה
		new_node->prev = NULL;
	}
	else //אם הרשימה לא ריקה
	{
		(*tail)->next = new_node;
		new_node->prev = *tail;
		*tail = new_node;
	}
}



void main()
{
	Node *head = NULL, *tail=NULL;
	doubly_insert_to_end(&head, &tail, 5);
	doubly_insert_to_end(&head, &tail, 37);
	doubly_insert_to_end(&head, &tail, 1);
	doubly_insert_to_end(&head, &tail, 42);
}
