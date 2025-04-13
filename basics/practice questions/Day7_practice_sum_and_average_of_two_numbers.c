#include <stdio.h>

//creating prototypes
void calculate_sum(float *sum, float num1, float num2);
void calculate_average(float *average, float num1, float num2);

//main function
int main()
{

    float num1, num2;
    printf("enter 1st number : ");
    scanf("%f", &num1);
    printf("\nenter 2nd number : ");
    scanf("%f", &num2);

    float sum;

    calculate_sum(&sum, num1, num2);

    printf("the sum is : %.2f\n", sum);

    float average;

    calculate_average(&average, num1, num2);

    printf("the average is : %.2f\n", average);

    return 0;
}

//for calculating sum
void calculate_sum(float *sum, float num1, float num2)
{
    *sum = num1 + num2;
}

//for calculation average
void calculate_average(float *average, float num1, float num2)
{
    *average = (num1 + num2) / 2;
}