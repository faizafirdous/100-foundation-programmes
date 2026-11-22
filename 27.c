#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Invalid units");
    }
    else if (units <= 100)
    {
        bill = units * 1.50;
        printf("Electricity bill = Rs.%.2f", bill);
    }
    else if (units <= 200)
    {
        bill = (100 * 1.50) + (units - 100) * 2.50;
        printf("Electricity bill = Rs.%.2f", bill);
    }
    else
    {
        bill = (100 * 1.50) + (100 * 2.50)
               + (units - 200) * 4.00;

        printf("Electricity bill = Rs.%.2f", bill);
    }

    return 0;
}