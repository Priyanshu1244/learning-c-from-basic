#include <stdio.h> //including librairies

// creating function prototype
float average(float num1, float num2, float num3);
float temperature(float temp);
float force(float mass);

// main function
int main()
{

    // declearing variables and getting inputs from user
    float num1, num2, num3, temp, mass;
    int choice;

    do
    {
        // getting input from user
        printf("enter the number that correspond to you quiry\n");
        printf("1-to find calculate average of 3 numbers\n");
        printf("2-to convert celcius into farenheit\n");
        printf("3-to calculate force of attraction on a body exerted by earth\n");
        printf("0-exit\n");
        scanf("%d", &choice);

        switch (choice) // calling function according to input
        {
        case 1:
            printf("enter first number : ");  //average block
            scanf("%f", &num1);
            printf("\nenter second number : ");
            scanf("%f", &num2);
            printf("\nenter third number : ");
            scanf("%f", &num3);
            float avg = average(num1, num2, num3);
            printf("\nthe average is %.2f\n", avg);
            break;
        case 2:
            printf("enter temperature in celcius : ");  //temperature block
            scanf("%f", &temp);
            float fahrenheit_temp = temperature(temp);
            printf("\n the temperature in fahrenheit is : %.2f\n", fahrenheit_temp);
            break;
        case 3:
            printf("enter mass of the body (in kilograms) : ");  //force block
            scanf("%f", &mass);
            float force_newton = force(mass);
            printf("\n the applied force on the body will be : %.2f newton\n", force_newton);
            break;
        case 0:
            printf("exiting program\n");  //exit 
            break;
        default:
            printf("invalid input\n");  //for other numbers than choices
        }
    } while (choice != 0);

    return 0;
}

float average(float num1, float num2, float num3) //logic to find average
{
    return (num1 + num2 + num3) / 3;
}

float temperature(float temp)  //logic to convert celius into farenheit
{
    return (temp * 1.8) + 32;
}

float force(float mass)  //logic to get force on a body exerted by earth
{

    return mass * 9.8;
}
