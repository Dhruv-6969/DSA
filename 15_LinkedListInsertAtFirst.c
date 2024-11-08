#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node * insertatfirst(struct node * head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 55;
    head->next = second;

    second->data = 100;
    second->next = third;

    third->data = 150;
    third->next = fourth;

    fourth->data = 200;
    fourth->next = NULL;

    traversal(head);
    head = insertatfirst(head, 30);
    printf("Insertion at first:- \n");
    traversal(head);

    return 0;
}   