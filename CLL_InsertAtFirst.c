#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node * insertatfirst(struct node * head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p = head->next;

    while(p->next!=head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
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

    head->data = 50;
    head->next = second;

    second->data = 100;
    second->next = third;

    third->data = 150;
    third->next = fourth;

    fourth->data = 200;
    fourth->next = head;

    traverse(head);
    head = insertatfirst(head, 25);
    printf("After insertion at first\n");
    traverse(head);

    return 0;
}