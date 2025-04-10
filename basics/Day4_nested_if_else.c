#include <stdio.h>

int main()

{
    int age;  //declearing variable


    printf("enter you age\n");  //getting age from user 
    scanf("%d", &age);

    if(age>=18){
        if(age>=60){
            printf("you can drive and you are a senior citizen\n");
            
        }
        else{
            printf("you can drive and you are an adult\n");
        }
       

    }
    else{
        printf("you are a minor and cannot drive\n");
    }
    
    return 0;
}