#include <stdio.h>
#include <string.h>

struct student_info  //creating structures to store data of students in different datatypes
{
    char name[50];
    int roll;
    float cgpa;
};

int main()
{

    struct student_info S1;       //entering student info
    strcpy(S1.name, "priyanshu");
    S1.roll = 21;
    S1.cgpa = 7.1;

    printf("the info of student 1 is : \n");  //printing the info inserted before
    printf("name : %s \n", S1.name);
    printf("roll number : %d\n", S1.roll);
    printf("CGPA is : %.2f\n", S1.cgpa);

    return 0;
}