#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Left shift = %d\n", n << 1);
    printf("Right shift = %d", n >> 1);

    return 0;
}