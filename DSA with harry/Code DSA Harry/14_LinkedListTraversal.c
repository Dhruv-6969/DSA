#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void LinkedListTraversal(struct node * ptr)
{
    while(ptr != NULL)
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}

int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    // Allocate memory for nodes in linked list in Heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    // Link first and second node
    head->data = 7;
    head->next = second;

    // Link second and third node
    second->data = 14;
    second->next = third;

    // List third and fourth node
    third->data = 66;
    third->next = fourth;

    // Termination of the fourth node
    fourth->data = 88;
    fourth->next = NULL;

    LinkedListTraversal(head);

    return 0;
}