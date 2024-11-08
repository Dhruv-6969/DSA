#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node * head = NULL;
struct  node * temp;

void ins_beg(struct node *);
void ins_end(struct node *);
void del_beg();
void del_end();
void traverse();

int main()
{
    int choice, n;
    struct node * new1;

    while(1)
    {
        
    }
    return 0;
}