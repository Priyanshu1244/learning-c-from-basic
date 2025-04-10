#include <stdio.h>

int main()
{

    int temp;  //declaring variables

    printf("enter temperature\n");  //getting temperature from user
    scanf("%d", &temp);


    //using else if statement instead of nested if else for efficiency and readability
    if (temp > 40)  
    {
        printf("its extremely hot, stay hydrated\n");
    }
    else if (temp > 30)
    {
        printf("its hot outside\n");
    }
    else if (temp > 20)
    {
        printf("Nice and warm\n");
    }
    else if (temp > 10)
    {
        printf("It's cold! Wear a jacket\n");
    }
    else
    {

        printf("Freezing temperatures! Stay indoors\n");
    }

    return 0;
}