#include <stdio.h>
#include <string.h>


struct student  //structure to store student details
{
    char name[50];
    int class;
    int roll;
    
    
};

void display_info(struct student s1); //function prototype

int main(){

    struct student S1 = {"priyanshu vishwakarma",12,505};  //initialization of varaible

    display_info(S1);  //calling function and sending arguments

    return 0;
}

void display_info(struct student s1){ //fucntion to print the details

    printf("name : %s\n",s1.name);
    printf("class : %d\n",s1.class);
    printf("roll number : %d\n",s1.roll);

}