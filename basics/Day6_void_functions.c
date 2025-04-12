#include <stdio.h> //including libraries

// creating function prototype
void hindi();
void english();
void gujrati();
void tamil();
void punjabi();
void bengali();

// main function
int main()
{

    int num; // declearing variables

    
    do
    {
        
        // getting input from user
        printf("enter number corresponding to your language\n");
        printf("1-hindi\n2-english\n3-gujrati\n4-tamil\n5-punjabi\n6-bengali\n0-exit\n");
        scanf("%d", &num);

        switch (num)  // calling function according to input
        {
        case 1:
            hindi();
            break;
        case 2:
            english();
            break;
        case 3:
            gujrati();
            break;
        case 4:
            tamil();
            break;
        case 5:
            punjabi();
            break;
        case 6:
            bengali();
            break;
        case 0:
            printf("exiting program\n");
            break;
        default:
            printf("invalid input\n");
        }
    } while (num != 0);
    return 0;
}

// defining each function

void hindi()
{
    printf("namaste\n");
}

void english()
{
    printf("hello\n");
}

void gujrati()
{
    printf("helo\n");
}

void tamil()
{
    printf("vanakamm\n");
}

void punjabi()
{
    printf("sata sri akala\n");
}

void bengali()
{
    printf("namoskar\n");
}