#include <stdio.h>

int main()
{

    int marks[50]; //declearing variables

    for (int i = 0; i < 50; i++)  //for loop to ask marks for each roll no
    {
        printf("enter the marks of roll no %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\n");

    for (int i = 0; i < 50; i++) //for loop to print marks of each roll no
    {
        printf("the marks of roll no. %d is : %d\n", i + 1, marks[i]);
    }

    return 0;
}