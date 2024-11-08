#include <stdio.h>
#include <stdlib.h>

struct stack 
{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack * ptr)
{
    if(ptr->top == -1)
    return 1;
    else
    return 0;
}

int isFull(struct stack * ptr)
{
    if(ptr->top == ptr->size-1)
    return 1;
    else 
    return 0;
}

int main()
{
    struct stack *s;
    s->size = 100;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    if(isEmpty)
    printf("Stack is Empty\n");
    else
    printf("Stack is not Empty\n");

    if(isFull)
    printf("Stack is Full\n");
    else
    printf("Stack is not Full\n");

    return 0;
}