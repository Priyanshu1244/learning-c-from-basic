#include <stdio.h>
#include <math.h>

int main()
{
    // declearing variables
    int operator;
    float num1, num2;
    int menu_choice;

    printf("welcome to simple calculator\n");

    do
    {
        // getting inputs from user
        printf("chosse one options from the following\n");
        printf("1-addition\n2-subtraction\n3-multiplication\n4-division\n5-power\n6-modulo\n0-exit\n");
        printf("enter operator : ");
        scanf("%d", &operator);

        if (operator== 0)
        {
            printf("exiting program\n");
            break;
        }

        printf("enter first number : ");
        scanf("%f", &num1);
        printf("enter second number : ");
        scanf("%f", &num2);

        // calculating and printing answer according to inputs
        switch (operator)
        {
        case 1:
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%.2f x %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 == 0)
            {
                printf("error, can't divide by zero\n");
            }
            else
            {
                printf("%.2f/%.2f = %.2f\n", num1, num2, num1 / num2);
            }
            break;
        case 5:
            printf("%.2f^%.2f = %.2f\n", num1, num2, pow(num1, num2));
            break;
        case 6:
            printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            break;
        default:
            printf("invalid input... try again\n");
            break;
        }

        // asking user input for exit or menu
        printf("press 1 to go to menu again\n0 - to exit\n");
        scanf("%d", &menu_choice);
        system("cls"); // clear the screen everytime user gets redirected to menu

    } while (menu_choice == 1);

    printf("exiting the program\n");
    return 0;
}