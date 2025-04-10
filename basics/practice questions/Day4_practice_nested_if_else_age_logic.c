#include <stdio.h>

int main()
{
    int age; // declearing variable

    printf("enter you age\n"); // getting age from user
    scanf("%d", &age);

    if (age >= 0)
    {
        if (age >= 80)  //when age is more than or equal to 80
        {
            printf("you are overaged and cannot driver\n");
        }
        else
        {
            if (age >= 60)  //when age is more than or equal to 80
            {
                printf("you are senoir citizen and can drive\n");
            }
            else
            {
                if (age >= 18)   //when age is more than or equal to 18
                {
                    printf("you can drive and you are an adult\n");
                }
                else
                {
                    if (age >= 15)  //when age is more than or equal to 15
                    {
                        printf("you are a minor and can only drive in selected areas with learing license\n");
                    }
                    else{
                        printf("you are underaged, cannot drive or apply for learner license\n");
                    }
                }
            }
        }
    }

    else
    {
        printf("you are not born yet\n");  //when age is in negative (just for fun)
    }

    printf("____________________________________________________________________________________________");

    return 0;
}