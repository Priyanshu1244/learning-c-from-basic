#include <stdio.h>  //including libraries

// creating function prototype 
void table(int number);
int sum(int num1, int num2);

int main()
{

    //declearing variables
    int choice;
    int number;
    int num1, num2;

    //getting input from user
    printf("enter the number that correspond to you quiry\n");
    printf("1-table of a number\n2-sum of any two number\n");
    scanf("%d", &choice);

    //asking the user what they want to do and calling functions according to task
    if (choice == 1)
    {
        printf("enter the number whose table you want to print\n");
        scanf("%d", &number);
        table(number);  //calling fuction and sending parameters
    }
    else if (choice == 2)
    {
        printf("enter the numbers whose sum you want to find\n");
        printf("first number : ");
        scanf("%d", &num1);
        printf("second number : ");
        scanf("%d", &num2);
        int total = sum(num1, num2);  //calling function and sending parameters also getting answer as returned value
        printf("the sum is : %d\n", total);
    }
    else
    {
        printf("invalid input\n");
    }

    return 0;
}

void table(int number)  //code to print table in table function
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", number, i, number * i);
    }
}

int sum(int num1, int num2)  //code to calculate and return sum in sum function
{
    int sum = num1 + num2;
    return sum;
}