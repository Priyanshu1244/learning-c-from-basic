#include <stdio.h>

int main()
{

    int year; // declearing variables

    printf("enter the year you want to check for leap year or not\n"); // getting year from user
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) // printing answer according to the logic of leap year
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}