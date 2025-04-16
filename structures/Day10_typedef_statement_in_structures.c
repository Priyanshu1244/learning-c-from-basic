#include <stdio.h>
#include <string.h>

typedef struct employee_details  // user defined datatypes to store employees details
{ 
    char name[50];
    int id;
    int salary;
} ED;   //giving ED as nickname to this struct through tyepdef statement

int main()
{

    //using the nickname given by user through typedef statement
    ED e1 = {"maichel", 12, 21000};  
    ED e2 = {"trevor", 23, 19000};
    ED e3 = {"franklin", 18, 26000};

    //printing the values
    printf("the name, id, salary of the employee 1 is : %s, %d, %d  ,respectivily\n", e1.name, e1.id, e1.salary);
    printf("the name, id, salary of the employee 2 is : %s, %d, %d  ,respectivily\n", e2.name, e2.id, e2.salary);
    printf("the name, id, salary of the employee 3 is : %s, %d, %d  ,respectivily\n", e3.name, e3.id, e3.salary);

    return 0;
}