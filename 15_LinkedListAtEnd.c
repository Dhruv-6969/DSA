#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node * insertatend(struct node * head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;

    while(p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
}

int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 20;
    head->next = second;

    second->data = 50;
    second->next = third;

    third->data = 100;
    third->next = fourth;

    fourth->data = 200;
    fourth->next = NULL;

    traverse(head);
    printf("After insertion at the end:- \n");
    insertatend(head, 300);
    traverse(head);

    return 0;
}