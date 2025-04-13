#include <stdio.h>

int sum(int num);

int main()
{

    // declearing variables and getting input form user
    int num;
    printf("enter the number till you want the sum of natural numbers : ");
    scanf("%d", &num);

    int Sn = sum(num);

    printf("sum of all the numbers till %d is : %d\n", num, Sn); // printing the value of final sum

    return 0;
}

int sum(int num)
{
    if (num == 1)
    {
        return 1;
    }
    int sumNM1 = sum(num - 1);
    int sum = sumNM1 + num;
    return sum;
}