#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int key;
    struct node *next;
} Node;

Node *reverese_list(Node *list)
{
    Node *prev = NULL, *current = list, *last = current->next;
    while (current != NULL)
    {
        current->next = prev;
        prev = current;
        current = last;
        if (last != NULL)
            last = last->next;
    }
    return prev;
}

void print_list(Node *list)
{
    Node *ptr;

    if (list == NULL)
    {
        printf("the list is empty\n\n");
    }
    else
    {
        for (ptr = list; ptr->next != NULL; ptr = ptr->next)
        {
            printf("%d --> ", ptr->key);
        }
        printf("%d --> NULL\n\n", ptr->key);
    }
}

void main()
{
    Node *head = NULL, *new_node, *p;
    int number;

    printf("enter a number. to exit enter -1: ");
    scanf("%d", &number);

    while (number != -1)
    {
        new_node = (Node *)malloc(sizeof(Node));
        new_node->key = number;
        new_node->next = NULL;

        if (head == NULL)
            head = new_node;
        else
        {
            for (p = head; p->next != NULL; p = p->next)
            {
            }
            p->next = new_node;
        }

        printf("enter a number. to exit enter -1: ");
        scanf("%d", &number);
    }

    print_list(head);
    head = reverese_list(head);
    print_list(head);
}