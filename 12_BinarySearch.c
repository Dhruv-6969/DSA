#include <stdio.h>

int binary_search(int arr[], int size, int element)
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 4, 5, 77, 88, 123, 156, 227, 346, 388, 455, 500, 750, 1000};
    int size = sizeof(arr) / sizeof(int);
    int element = 77;
    int index = binary_search(arr, size, element);
    printf("Element %d is at index %d", element, index);
    return 0;
}