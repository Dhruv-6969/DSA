#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node * ins_beg(struct node * head);

int main()
{
    while(1)
    {
        int choice, n;
        struct node * head;
        printf("\nEnter the choice\n");
        printf("1. ins_beg\n2. ins_end\n3. del_beg\n4. del_end\n5. traverse\n6. exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case1:
            head = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data:- \n");
            scanf("%d", &head->data);
            head->next = NULL;
            ins_beg(head);
            break;
        }
    }   
    return 0;
}