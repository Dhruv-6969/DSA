#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("First Element: %d\n", *ptr);
    ptr++;
    printf("Second Element: %d\n", *ptr);
    return 0;
}