#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void push();
void pop();
void display();

int stack[MAX];
int top = -1;

int main()
{
    int choice;
    while (1)
    {
        printf("Enter your choice:- \n");
        printf("1. Push\n2. Pop\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("Invalid Entry\n");
        }
    }
    return 0;
}

void push()
{
    int n;
    if (top >= MAX - 1)
    {
        printf("\nStack Overflow\n");
    }
    else
    {
        top = top + 1;

        printf("\nEnter the value to be pushed\n");
        scanf("%d", &n);

        stack[top] = n;
    }
}

void pop()
{
    int n;
    if (top == -1)
    {
        printf("\nStack is Underflow\n");
    }
    else
    {
        top = top - 1;
    }
}

void display()
{
    int i = top;
    if(top == -1)
    printf("\nStack is Underflow\n");
    else
    {
        printf("The values entered:- \n");
        while(i>=0)
        {
            printf("%d\n", stack[i]);
            i--;
        }
    }
}