#include <stdio.h>
#include <string.h>

struct student  //structure to store student details
{
    char name[50];
    int class;
    int roll;
};

int main()
{

    //declearing and intializing structure and pointer
    struct student S1 = {"priyanshu vishwakarma",12,505};
    struct student *pointer;
    pointer = &S1;

    //printing the details using pointer
    printf("the details of student 1 are : \n");
    printf("name : %s\n",(*pointer).name);
    printf("class : %d\n",(*pointer).class);
    printf("roll number : %d\n",(*pointer).roll);

    //printing the same thing using "->" operation
    printf("the details of student 1 (using -> operator) are : \n");
    printf("name : %s\n",pointer->name);
    printf("class : %d\n",pointer->class);
    printf("roll number : %d\n",pointer->roll);

    return 0;
}