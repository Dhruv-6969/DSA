#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void push(struct node *);
void pop();
void display();

struct node *head = NULL;

int main()
{
    int choice;
    struct node *new1;
    while (1)
    {
        printf("Enter your choice:- \n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            new1 = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data:- \n");
            scanf("%d", &new1->data);
            new1->next = NULL;
            push(new1);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Thak You!\n");
            exit(1);
            break;

        default:
            printf("Wrong Input! Enter between 1-4\n");
            continue;
        }
    }
    return 0;
}

void push(struct node *new1)
{
    if (head == NULL)
    {
        head = new1;
    }
    else
    {
        new1->next = head;
        head = new1;
    }
}

void pop()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        head = head->next;
        free(temp);
        temp = NULL;
    }
}

void display()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}