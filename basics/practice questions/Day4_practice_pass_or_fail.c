#include <stdio.h>

int main()
{

    float marks1, marks2, marks3; // declearing varaibles

    // getting marks in each subject form user
    printf("enter your marks in 1st subject (between 1 and 100)\n");
    scanf("%f", &marks1);
    printf("enter your marks in 2nd subject (between 1 and 100)\n");
    scanf("%f", &marks2);
    printf("enter your marks in 3rd subject (between 1 and 100)\n");
    scanf("%f", &marks3);

    // calculation the percentage
    float totalpercentage = (((marks1 + marks2 + marks3) * 100) / 300);

    // printing percentage and pass/fail status for subject1
    if (marks1 >= 0 && marks1 <= 100)
    {
        if (marks1 >= 33)
        {
            printf("you have passed and you got %.2f%% in subject 1\n", marks1);
        }
        else
        {
            printf("you have failed and you got %.2f%% in subject 1\n", marks1);
        }
    }
    else
    {
        printf("you have entered invalid marks for subject 1\n");
    }

    // printing percentage and pass/fail status for subject2
    if (marks2 >= 0 && marks2 <= 100)
    {
        if (marks2 >= 33)
        {
            printf("you have passed and you got %.2f%% in subject 2\n", marks2);
        }
        else
        {
            printf("you have failed and you got %.2f%% in subject 2\n", marks2);
        }
    }
    else
    {
        printf("you have entered invalid marks for subject 2\n");
    }

    // printing percentage and pass/fail status for subject3
    if (marks3 >= 0 && marks3 <= 100)
    {
        if (marks3 >= 33)
        {
            printf("you have passed and you got %.2f%% in subject 3\n", marks3);
        }
        else
        {
            printf("you have failed and you got %.2f%% in subject 3\n", marks3);
        }
    }
    else
    {
        printf("you have entered invalid marks for subject 3\n");
    }

    // printing percentage and pass/fail status for the overall exam
    if ((marks1 >= 0 && marks1 <= 100) && (marks2 >= 0 && marks2 <= 100) && (marks3 >= 0 && marks3 <= 100))
    {
        if ((marks1 >= 33) && (marks2 >= 33) && (marks3 >= 33) && totalpercentage >= 40)
        {
            printf("you have passed the overall exam and your overall percentage is : %.2f%%\n", totalpercentage);
        }
        else
        {
            printf("you have failed the overall exam and your overall percentage is : %.2f%%\n", totalpercentage);
        }
    }
    else
    {
        printf("your entered marks in subjects are not valid, so overall result and percentage can't be calculated\n");
    }

    printf("_________________________________________________________________________________________________________\n");

    return 0;
}