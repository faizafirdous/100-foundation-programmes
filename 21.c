#include <stdio.h>

int main()
{
    int age, price;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 12 && age >= 0)
    {
        price = 50;
    }
    else if (age < 60 && age >= 12)
    {
        price = 100;
    }
    else if (age >= 60)
    {
        price = 70;
    }
    else
    {
        printf("Invalid age");
        return 0;
    }

    printf("Ticket price = Rs.%d", price);

    return 0;
}