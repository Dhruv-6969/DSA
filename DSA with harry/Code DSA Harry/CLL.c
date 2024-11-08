#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void ins_beg(struct node *new1)
{
    struct node *temp = head;

    if (head == NULL)
    {
        head = new1;
        head->next = head;
    }
    else
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = new1;
        new1->next = head;
        head = new1;
    }
}

void ins_end(struct node *new1)
{
    struct node *temp = head;

    if (head == NULL)
    {
        head = new1;
        head->next = head;
    }
    else
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = new1;
        new1->next = head;
    }
}

void del_beg()
{
    struct node *temp = head;
    struct node *temp1 = head;
    if (head == NULL)
    {
        printf("Its an Empty List!\n");
    }
    else if (head->next == head)
    {
        printf("%d is Deleted\n", head->data);
        head = NULL;
    }
    else
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = head->next;
        printf("%d is Deleted\n", head->data);
        head = temp->next;
        free(temp1);
        temp1 == NULL;
    }
}

void del_end()
{
    struct node *temp = head;
    struct node *temp1 = head;

    if (head == NULL)
    {
        printf("Its an Empty List!\n");
    }
    else if (head->next != head)
    {
        printf("%d is Deleted!\n", head->data);
        head = NULL;
    }
    else
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        while (temp1->next != temp)
        {
            temp1 = temp1->next;
        }
        printf("%d is Deleted", temp->data);
        temp1->next = head;
        free(temp);
        temp = NULL;
    }
}

void traverse()
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("Empty List!\n");
    }
    else
    {
        printf("Elements:- ");
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
        printf("\n");
    }
}

int main()
{
    int choice;
    struct node *new1;

    while (1)
    {
        printf("Enter your choice:- \n");
        printf("1. Insert at Begin\n2. Insert at End\n3. Deletion at Begin\n4. Deletion at End\n5. Traverse\n6. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            new1 = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data:- \n");
            scanf("%d", &new1->data);
            new1->next = NULL;
            ins_beg(new1);
            break;

        case 2:
            new1 = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data:- \n");
            scanf("%d", &new1->data);
            new1->next = NULL;
            ins_end(new1);
            break;

        case 3:
            del_beg();
            break;

        case 4:
            del_end();
            break;

        case 5:
            traverse();
            break;

        case 6:
            printf("Thank You!\n");
            exit(1);
            break;

        default:
            printf("Wrong Input! Enter between 1-6\n");
            continue;
        }
    }
    return 0;
}