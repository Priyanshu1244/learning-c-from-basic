#include <stdio.h>

void store_table(int table[][10], int num, int j);

int main()
{

    int table[3][10];
    int num1, num2, num3;

    printf("enter number whose table you want to store in first slot\n");
    scanf("%d", &num1);
    store_table(table, num1, 0);
    printf("enter number whose table you want to store in second slot\n");
    scanf("%d", &num2);
    store_table(table, num2, 1);
    printf("enter number whose table you want to store it third slot\n");
    scanf("%d", &num3);
    store_table(table, num3, 2);

    
    
        for (int row = 0; row < 3; row++)
        {
            printf("the table of %d is : ",num1);
            for (int col = 0; col < 10; col++)
            {
                printf("%d ", table[row][col]);
            }
            num1=num2;
            printf("\n");
        }
    

    return 0;
}

void store_table(int table[][10], int num, int j)
{

    for (int i = 0; i < 10; i++)
    {
        table[j][i] = num * (i + 1);
    }
}