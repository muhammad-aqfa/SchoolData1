
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int x;
    struct node *next;
}Node;

Node *insert_to_end(Node *head, int number)
{
    Node *p;
    //===============בניית הצומת החדשה
    Node *new_node;
    new_node = (Node *)malloc(sizeof(Node));
    new_node->x = number;
    new_node->next = NULL;
    //===================

    //===========================בדיקה האם הרשימה ריקה או לא
    if (head == NULL) //אם הרשימה ריקה
    {
        head = new_node; //ראש הרשימה מקבל את כתובתו של הצומת החדש
    }
    else //אם הרשימה לא ריקה
    {
        for (p = head; p->next != NULL; p = p->next)
            ;               //לולאה ששמה את המצביע בצומת האחרון של הרשימה
        p->next = new_node; //של הצומת האחרון next השמת כתובתו של הצומת החדש בשדה
    }
    return head; //מחזירים את ראש הרשימה
}

//מחיקת איבר ספציפי ברשימה
Node *delete_number(Node *head, int num)
{
    Node *ptr, *prev;
    for (ptr = prev = head; ptr != NULL; prev = ptr, ptr = ptr->next)
    {
        if (ptr->x == num)
        {
            if (ptr == head)
                head = ptr->next;
            else
                prev->next = ptr->next;
            free(ptr);
            break;
        }
    }
    return head;
}

//מחיקת כל הרשימה
Node *clean_list(Node *head)
{
    Node *ptr;
    while (head)
    {
        ptr = head->next;
        free(head);
        head = ptr;
    }
    return NULL;
}

void print(Node *head)
{
    Node *ptr;
    if (head == NULL) //if(!head)
        printf("The list is empty\n\n");
    else
    {
        for (ptr = head; ptr != NULL; ptr = ptr->next) //for(ptr=head;  ptr ;ptr=ptr->next)
        {
            printf("%d\t", ptr->x);
        }
    }
    printf("\n\n\n");
}

//פונקציה שמדפיסה גם כתובות
//void print_address(Node *head)
//{
//	Node *ptr;
//	if (head == NULL) //if(!head)
//		printf("The list is empty\n\n");
//	else
//	{
//		for (ptr = head; ptr != NULL; ptr = ptr->next) //for(ptr=head;  ptr ;ptr=ptr->next)
//		{
//			printf("address:%p   value:%d   next address:%p\n", ptr, ptr->x, ptr->next);
//		}
//	}
//	printf("\n\n\n");
//}


Node *insert_to_beginning(Node *list, int number)
{
    Node *new_node;
    do
    {
        new_node = (Node *)malloc(sizeof(Node)); //יצירת צומת חדשה
    } while (!new_node);                         //while(new_node==NULL);
    new_node->x = number;                        //הצבנו את הערך שהתקבל כפרמטר
    new_node->next = list;                       //של הצומת החדשה להצביע לצומת הראשונה ברשימה next-גרמנו ל
    return new_node;
}

void main()
{
    Node *head = NULL;
    print(head);
    head = insert_to_beginning(head, 5);
    print(head);
    head = insert_to_end(head, 37);
    print(head);
    head = insert_to_beginning(head, 1);
    print(head);
    head = insert_to_end(head, 42);
    print(head);
    head = insert_to_beginning(head, 4);
    print(head);
    head = clean_list(head);
    print(head);
}
