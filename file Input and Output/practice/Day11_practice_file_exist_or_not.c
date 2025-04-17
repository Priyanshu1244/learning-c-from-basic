#include <stdio.h>

int main()
{

    FILE *pointer; //creating a file
    pointer = fopen("text.txt", "r");  //opening file

    int num;

    if (pointer == NULL)  //if file is null (not here)
    {
        printf("error! , file doesn't exists\n");
    }
    else //print the integers one by one if exists
    {
        fscanf(pointer, "%d", &num);
        printf("the value of num1 is : %d\n", num);

        fscanf(pointer, "%d", &num);
        printf("the value of num2 is : %d\n", num);

        fscanf(pointer, "%d", &num);
        printf("the value of num3 is : %d\n", num);

        fscanf(pointer, "%d", &num);
        printf("the value of num4 is : %d\n", num);

        fscanf(pointer, "%d", &num);
        printf("the value of num5 is : %d\n", num);
    }

    fclose(pointer);

    return 0;
}