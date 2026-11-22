#include <stdio.h>

int main()
{
    int hour;

    printf("Enter hour: ");
    scanf("%d", &hour);

    if (hour < 0 || hour > 23)
    {
        printf("Invalid hour");
    }
    else if (hour < 12)
    {
        printf("Good Morning");
    }
    else if (hour < 17)
    {
        printf("Good Afternoon");
    }
    else if (hour < 21)
    {
        printf("Good Evening");
    }
    else
    {
        printf("Good Night");
    }

    return 0;
}