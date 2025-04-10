#include <stdio.h>

int main()
{

    int marks;  //declaring variables

    printf("enter your marks\n");  //getting marks from user
    scanf("%d", &marks);


    //using else if ladder to check the grade according to the marks
    
    if((marks>100)||(marks<0)){                 //checking if the marks inserted are valid or not
        printf("invalid marks\n");
    }
    else if(marks>=90){                         //assigning grades according to marks
        printf("A+\n");
    }
    else if(marks>=80){
        printf("A\n");
    }
    else if(marks>=70){
        printf("B\n");
    }
    else if(marks>=60){
        printf("C\n");
    }
    else if(marks>=50){
        printf("D\n");
    }
    else{
        printf("F\n");
    }

    return 0;
}