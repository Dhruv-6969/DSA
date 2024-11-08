#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node * left;
    struct node * right;
};

struct node * createnode(int data)
{
    struct node * n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}

void in_order(struct node * n)
{
    if(n!=NULL)
    {
        in_order(n->left);
        printf("%d ", n->data);
        in_order(n->right);
    }
}

int main()
{
    struct node * p = createnode(4);
    struct node * p1 = createnode(1);
    struct node * p2 = createnode(6);
    struct node * p3 = createnode(5);
    struct node * p4 = createnode(2);

    /* The Tree Looks Like:- 5 1 2 4 6

                4
              /   \
            1       6
          /   \
        5       2  
    */

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    in_order(p);

    return 0;
}