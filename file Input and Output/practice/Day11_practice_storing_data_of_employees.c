#include <stdio.h>
#include <string.h>

typedef struct employee_details
{
    char name[30];
    int id;
    int salary;
}ed;

int main()
{
    FILE*ptr;
    ptr = fopen("text.txt","w");

    int data;

    printf("how many employees data you want to enter : ");
    scanf("%d", &data);
    getchar();

    struct employee_details ed[data];

    for (int i = 0; i < data; i++)
    {
        printf("enter the details of %d employee\n",i+1); // details for first employee
        printf("name of employee :  ");
        fgets(ed[i].name, sizeof(ed[i].name), stdin);
        ed[i].name[strcspn(ed[i].name, "\n")] = '\0';
        printf("employee id : ");
        scanf("%d", &ed[i].id);
        getchar();
        printf("employee salary : ");
        scanf("%d", &ed[i].salary);
        getchar();
        fprintf(ptr,"%s,%d,%d",ed[i].name,ed[i].id,ed[i].salary);
        fputc('\n',ptr);
    }

    fclose(ptr);

    return 0;
}