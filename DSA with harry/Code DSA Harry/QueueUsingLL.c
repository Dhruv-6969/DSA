#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void en_queue(struct node *);
void de_queue();
void display();

struct node *head = NULL;

int main()
{
    int choice;
    struct node *new1;
    while (1)
    {
        printf("Enter your choice:- \n");
        printf("1. En_queue\n2. De_queue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            new1 = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data:- \n");
            scanf("%d", &new1->data);
            new1->next = NULL;
            en_queue(new1);
            break;

        case 2:
            de_queue();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Thank You!\n");
            exit(1);
            break;

        default:
            printf("Wrong Input! Enter between 1-4\n");
            continue;
        }
    }
    return 0;
}

void en_queue(struct node *new1)
{
    struct node *temp = head;

    if (head == NULL)
    {
        head = new1;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new1;
    }
}

void de_queue()
{
    struct node * temp = head;

    if(head == NULL)
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
    struct node * temp = head;

    if(head == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}