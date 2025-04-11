#include <stdio.h>

int main()
{

    int income, category; // declreaing varaibles

    // getting income from user
    printf("enter your annual income in rupees (in numbers only)\n");
    scanf("%d", &income);

    // decideing user category from his income
    if (income < 250000)
    {
        category = 1;
    }
    else if (income >= 250000 && income < 500000)
    {
        category = 2;
    }
    else if (income >= 500000 && income < 1000000)
    {
        category = 3;
    }
    else if (income >= 1000000)
    {
        category = 4;
    }

    // printing user category and the amount he has to pay as tax
    switch (category)
    {
    case 1:
        printf("you comes under no tax slab\nyou have to pay zero tax");
        break;
    case 2:
        printf("you comes under the 5%% tax slab\n");
        printf("you have to pay %f rupees\n", (income - 250000) * 0.05);
        break;
    case 3:
        printf("you comes under the 20%% tax slab\n");
        printf("you have to pay %f rupees\n", (250000 * 0.05) + ((income - 500000) * 0.2));
        break;
    case 4:
        printf("you comes under the 30%% tax slab\n");
        printf("you have to pay %f rupees\n", (250000 * 0.05) + (500000 * 0.2) + ((income - 1000000) * 0.3));
        break;
    }

    return 0;
}