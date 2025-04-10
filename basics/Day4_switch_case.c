#include <stdio.h>

int main()
{

    int a;
    printf("enter a number between 1 to 7 to know the corresponding day\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("monday\n");
        break;
    case 2:
        printf("tuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 4:
        printf("thrusday\n");
        break;
    case 5:
        printf("friday\n");
        break;
    case 6:
        printf("saturday\n");
        break;
    case 7:
        printf("sunday\n");
        break;
    default:
        printf("invalid input, enter number between 1 to 7 only\n");
        break;
    }
}