#include <stdio.h>

int linear_search(int arr[], int size, int element)
{
    for(int i =0; i<size; i++)
    {
        if(arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[100] = {53,5,6,54,76,34,23,77,88,33,21,85432,545,61};
    int size = sizeof(arr)/sizeof(int);
    int element = 77;
    int index = linear_search(arr, size, element);
    printf("The element %d is at index %d", element, index);
    return 0;
}