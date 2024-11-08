// Write a function that return the largest number in a user defined array which is passed as parameter.

#include <stdio.h>
int largest_num(int *ptr, int num)
{
    int l = *ptr;
    
    for(int i = 1; i<num; i++)
    {
        if(*(ptr+i)>l)
        {
            l = *(ptr+i);
        }
    }
    return l;
}
int main()
{
    int n;
    printf("Enter the size of the array:- \n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the integers:- \n");

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Largest Number is :- %d\n", largest_num(arr, n));

    return 0;
}