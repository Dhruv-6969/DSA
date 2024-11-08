#include <stdio.h>
#include <math.h>
void binary(int n)
{
    int c = 0;
    int b = 0;
    float p;
    while (n != 0)
    {
        if (n % 2 != 0)
        {
            p = pow(10, c);
            b = p + b;
        }
        n = n / 2;
        c++;
    }
    printf("Binary equivalent is: %d\n", b);
}
int main()
{
    int n;
    printf("Enter an integer:- \n");
    scanf("%d", &n);
    binary(n);
    return 0;
}