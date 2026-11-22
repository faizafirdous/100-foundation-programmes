#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter bit position: ");
    scanf("%d", &k);

    if (n & (1 << k))
    {
        printf("Kth bit is set");
    }
    else
    {
        printf("Kth bit is not set");
    }

    return 0;
}