#include <stdio.h>
#include <stdlib.h>

//מבנה צומת ברשימה המקושרת
typedef struct node
{
    int key;
    struct node *next;
} Node;

//פונקציה שמדפיסה את הרשימה המקושרת
void print_list(Node *list)
{
    Node *p;

    if (list == NULL)
        printf("The list is empty...\n");
    else
    {
        for (p = list; p != NULL; p = p->next)
        {
            printf("%d --> ", p->key);
        }
        printf("NULL\n");
    }
}

Node *move_min_max(Node *head)
{
    Node *p, *end;
    int max, min, temp;

    //בדיקה שהרשימה ריקה
    if (head == NULL)
        return NULL;
    else
    {
        //אתחול המינימום והמקסימום
        max = head->key;

        //מציאת הצומת עם המספר המקסימלי
        for (p = head->next; p != NULL; p = p->next)
        {
            if (p->key > max)
            {
                temp = head->key;
                max = p->key;
                head->key = max;
                p->key = temp;
            }
        }

        //מציאת הצומת האחרונה
        for (p = head; p->next != NULL; p = p->next);
        end = p;
        min = end->key;

        //מציאת הצומת עם המספר המינימלי
        for (p = head->next; p != NULL; p = p->next)
        {
            if (p->key < min)
            {
                temp = end->key;
                min = p->key;
                end->key = min;
                p->key = temp;
            }
        }
    }

    return head;
}

//תוכנית ראשית
void main()
{

    Node *head = NULL, *p, *new_node;
    int number;

    printf("Hi, please enter a positive number: ");
    scanf("%d", &number);
    while (number >= 0)
    {
        //יצירת צומת חדשה ברשימה
        new_node = (Node *)malloc(sizeof(Node));
        new_node->key = number;
        new_node->next = NULL;

        //בדיקה אם ראש הרשימה ריק
        if (head == NULL)
            head = new_node;
        else
        {
            //אם ראש הרשימה לא ריק אז רצים על כל איברי הרשימה עד לאיבר האחרון
            for (p = head; p->next != NULL; p = p->next)
                ; //רץ על כל הצמתים ברשימה
            p->next = new_node;
        }

        //קליטה של מספר נוסף
        printf("please enter a positive number: ");
        scanf("%d", &number);
    }

    print_list(head);

    head = move_min_max(head);

    print_list(head);
}