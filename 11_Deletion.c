#include <stdio.h>
void display(int arr[], int size)
// Code for Traversal
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int deletion(int index, int arr[], int size)
// Code for Deletion
{
    for (int i = index; i <= size - 2; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, index = 3;
    deletion(index, arr, size);
    size -= 1;
    display(arr, size);
    return 0;
}