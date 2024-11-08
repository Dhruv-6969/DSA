#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node * next;
};

void traverse(struct node * ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node * insertafternode(struct node * head,struct node * prevnode, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
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

    head->data = 66;
    head->next = second;

    second->data = 77;
    second->next = third;

    third->data = 88;
    third->next = fourth;

    fourth->data = 99;
    fourth->next = NULL;

    traverse(head);
    insertafternode(head, second, 80);
    printf("Insertion after node:- \n");
    traverse(head);
    return 0;
}