#include<stdio.h>
#include<string.h>

struct employee_details{  //user defined datatypes to store employees details
    char name[50]; 
    int id;
    int salary;
};

int main(){

    struct employee_details e1,e2,e3;  //declearing varibles of user defined datatype

    printf("enter the details of first employee\n");  //details for first employee
    printf("name of employee :  ");
    fgets(e1.name,sizeof(e1.name),stdin);
    e1.name[strcspn(e1.name, "\n")] = '\0';
    printf("employee id : ");
    scanf("%d",&e1.id);
    printf("employee salary : ");
    scanf("%d",&e1.salary);
    getchar();

    printf("enter the details of second employee\n");  //details for second employee 
    printf("name of employee : ");
    fgets(e2.name,sizeof(e2.name),stdin);
    e2.name[strcspn(e2.name, "\n")] = '\0';
    printf("employee id : ");
    scanf("%d",&e2.id);
    printf("employee salary : ");
    scanf("%d",&e2.salary);
    getchar();

    printf("enter the details of third employee\n");  //details for third employee
    printf("name of employee : ");
    fgets(e3.name,sizeof(e3.name),stdin);
    e3.name[strcspn(e3.name,"\n")] = '\0';
    printf("employee id : ");
    scanf("%d",&e3.id);
    printf("employee salary : ");
    scanf("%d",&e3.salary);
    
 
    //final output
    printf("the name, id, salary of the employee 1 is : %s, %d, %d  ,respectivily\n",e1.name,e1.id,e1.salary);
    printf("the name, id, salary of the employee 2 is : %s, %d, %d  ,respectivily\n",e2.name,e2.id,e2.salary);
    printf("the name, id, salary of the employee 3 is : %s, %d, %d  ,respectivily\n",e3.name,e3.id,e3.salary);

    return 0;

}