#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push()
{
    int n;

    if (top >= MAX)
    {
        printf("Stack is Overflowed\n");
    }
    else
    {
        top = top + 1;

        printf("Enter the element:- \n");
        scanf("%d", &n);

        stack[top] = n;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is Underflowed\n");
    }
    else
    {
        top = top - 1;
    }
}

void display()
{
    int i = top;

    if (top == -1)
    {
        printf("Stack is Underflowed\n");
    }
    else
    {
        while (i >= 0)
        {
            printf("%d", stack[i]);
            i--;
        }
    }
}

int main()
{
    int choice;

    printf("Enter the choice:- \n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    scanf("%d", &choice);

    while (1)
    {
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