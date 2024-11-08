#include <stdio.h>
void display(int arr[], int size)
//Code for Traversal
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertion(int element, int index, int arr[], int size, int capacity)
//Code for Insertion
{
    if (size > capacity)
        return -1;
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;
    insertion(element, index, arr, size, 100);
    size += 1;
    display(arr, size);
    return 0;
}