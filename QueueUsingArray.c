#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void en_queue();
void de_queue();
void display();

int queue[MAX];
int rear = -1;
int front = -1;

int main()
{
    int choice;
    while (1)
    {
        printf("Enter your choice:- \n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            en_queue();
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
        default:
            printf("Wrong Input! Enter between 1-4\n");
            continue;
        }
    }
    return 0;
}

void en_queue()
{
    int data;
    printf("Enter the data:- \n");
    scanf("%d", &data);

    if(rear == MAX - 1)
    {
        printf("Overflow\n");
    }
    else if(rear == -1)
    {
        rear = 0;
        front = 0;
        queue[rear] = data;
    }
    else
    {
        rear = rear + 1;
        queue[rear] = data;
    }
}

void de_queue()
{
    if(front ==-1)
    {
        printf("Underflow\n");
    }
    else if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = front + 1;
    }
}

void display()
{
    int i = front;
    if(i == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        while(i <= rear)
        {
            printf("%d ", queue[i]);
            i++;
        }
        printf("\n");
    }
}