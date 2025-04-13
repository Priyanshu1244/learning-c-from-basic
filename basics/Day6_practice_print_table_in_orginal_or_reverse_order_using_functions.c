#include <stdio.h> //including librairies

// creating function prototype
void original_table(int number);
void reverse_table(int number);

// main function
int main()
{

    // declearing variables and getting inputs from user
    int number, choice;
    printf("enter the number whose table you want\n");
    scanf("%d", &number);
    printf("in which order you want the table of given number\n");
    printf("1-original order\n2-reverse order\n");
    scanf("%d", &choice);

    // using if to call function according to user input
    if (choice == 1)
    {
        original_table(number);
    }
    else if (choice == 2)
    {
        reverse_table(number);
    }
    else
    {
        printf("invalid input\n");
    }

    return 0;
}

void original_table(int number) // original table function logic
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", number, i, number * i);
    }
}

void reverse_table(int number) // reverse table function logic
{
    for (int i = 10; i >= 1; i--)
    {
        printf("%d X %d = %d\n", number, i, number * i);
    }
}
