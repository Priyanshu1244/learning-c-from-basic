#include <stdio.h>

int main()
{
    //declearing array and variable and getting input form user 
    int table[10];
    int num;
    printf("enter the number whose table you want to print\n");
    scanf("%d", &num);

    //storing table of given number in array
    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
    }

    printf("the table of %d is : \n", num);

    //printing the table of given number
    for (int j = 0; j < 10; j++)
    {

        printf("%d x %d = %d\n", num, j + 1, table[j]);
    }
    return 0;
}
