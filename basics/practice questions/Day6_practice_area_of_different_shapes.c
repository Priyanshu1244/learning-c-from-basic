#include <stdio.h> //including libraries

// creating function prototype
float circle(int length1);
float rectangle(int length1, int length2);
float square(int length1);
float triangle(int length1, int length2);

int main()
{

    // declearing variable
    int length1, length2;
    int choice;

    // getting input from user
    printf("enter the number that correspond to you quiry\n");
    printf("1-to find area of circle\n2-to find area of rectangle\n3-to find area of square\n4-to find area of triangle\n");
    scanf("%d", &choice);

    // asking the user what they want to do and calling functions according to task
    if (choice == 1)
    {
        printf("enter the radius of circle : ");
        scanf("%d", &length1);
        float area = circle(length1); // calling function and sending parameters also and getting answer as returned value
        printf("the area is : %.2f\n",area);
    }
    else if (choice == 2)
    {
        printf("enter the length of rectangle : ");
        scanf("%d", &length1);
        printf("enter the breadth of rectangle : ");
        scanf("%d", &length2);
        float area = rectangle(length1,length2); // calling function and sending parameters also and getting answer as returned value
        printf("the area is : %.2f\n", area);
    }
    else if (choice == 3)
    {
        printf("enter the side of square : ");
        scanf("%d", &length1);
        float area = square(length1); // calling function and sending parameters also and getting answer as returned value
        printf("the area is : %.2f\n", area);
    }
    else if (choice == 4)
    {
        printf("enter the height of triangle : ");
        scanf("%d", &length1);
        printf("enter the base of triangle : ");
        scanf("%d", &length2);
        float area = triangle(length1,length2); // calling function and sending parameters and also getting answer as returned value
        printf("the area is : %.2f\n", area);
    }
    else
    {
        printf("invalid input\n");
    }

    return 0;
}

float circle(int length1){                  //circle block
    float area = 3.14 * length1 * length1;
    return area;
}

float rectangle(int length1, int length2){  //rectangle block
    int area = length1 * length2;
    return area;
}

float square(int length1){                  //square block
    float area = length1 * length1;
    return area;
}

float triangle(int length1, int length2){   //triangle block
    float area = 0.5 * length1 * length2;
    return area;
}
