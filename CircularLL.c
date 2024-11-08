#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void ins_beg(struct node *);
void ins_end(struct node *);
void del_beg();
void del_end();
void traverse();

int main()
{
    int choice;
    struct node *new1;

    while (1)
    {
        printf("Enter your choice:- \n");
        printf("1. Insert at Begin\n2. Insert at End\n3. Deletion at begin\n4. Deletion at end\n5. Traverse\n6. Exit\n");
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

        default:
            printf("Wrong Choice! Please select from 1-6\n");
            continue;
        }
    }

    return 0;
}

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
        new1->next = head;
        temp->next = new1;
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
        printf("No elements present\n");
    }
    else if (head->next == head)
    {
        printf("Item deleted from the list = %d\n", head->data);
        head = NULL;
    }
    else
    {
        printf("Item deleted from the list = %d\n", head->data);

        while (temp->next != head)
        {
            temp = temp->next;
        }
        head = head->next;
        temp->next = head;
        free(temp1);
        temp1 = NULL;
    }
}

void del_end()
{
    struct node *temp = head;
    struct node *temp1 = head;

    if (head == NULL)
    {
        printf("No elements present\n");
    }
    else if (head->next == head)
    {
        printf("Item deleted from the list = %d\n", head->data);
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

        printf("Item deleted from the list = %d\n", temp->data);

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
        printf("No elements in the List\n");
    }
    else
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
        printf("\n\n");
    }
}