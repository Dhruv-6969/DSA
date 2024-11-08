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

void post_order(struct node * n)
{
    if(n!=NULL)
    {
        post_order(n->left);
        post_order(n->right);
        printf("%d ", n->data);
    }
}

int main()
{
    struct node * p = createnode(4);
    struct node * p1 = createnode(1);
    struct node * p2 = createnode(6);
    struct node * p3 = createnode(5);
    struct node * p4 = createnode(2);

    /* The Tree Looks Like:- 5 2 1 6 4

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

    post_order(p);

    return 0;
}