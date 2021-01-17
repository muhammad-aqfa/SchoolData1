
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int x;
	struct node* next;
	
}Node;


Node* circular_insert_to_end(Node* head, int number)
{
	Node *p;
	//===============בניית הצומת החדשה
	Node *new_node;
	new_node = (Node*)malloc(sizeof(Node));
	new_node->x = number;
	//===================

	//===========================בדיקה האם הרשימה ריקה או לא
	if (head == NULL)//אם הרשימה ריקה
	{
		head = new_node;//ראש הרשימה מקבל את כתובתו של הצומת החדש
	}
	else //אם הרשימה לא ריקה
	{
		for (p = head; p->next != head; p = p->next)//לולאה ששמה את המצביע בצומת האחרון של הרשימה
		{
		}
		p->next = new_node;//של הצומת האחרון next השמת כתובתו של הצומת החדש בשדה

	}
	new_node->next = head;
	return head;//מחזירים את ראש הרשימה
}


void main()
{
	Node *head = NULL;
	head = circular_insert_to_end(head, 5);
	head = circular_insert_to_end(head, 37);
	head = circular_insert_to_end(head, 1);
	head = circular_insert_to_end(head, 42);
}
