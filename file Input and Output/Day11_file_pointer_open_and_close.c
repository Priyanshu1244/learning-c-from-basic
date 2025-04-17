#include <stdio.h>

int main()
{
    FILE *pointer;  //creating a file type pointer
    pointer = fopen("text.txt", "r");  //statement to open a file in a mode (read mode in this case)

    int num;

    //printing the integer in the file one by one using num as an temperoray variable
    fscanf(pointer, "%d", &num);
    printf("the value of num is : %d\n", num);

    fscanf(pointer, "%d", &num);
    printf("the value of num is : %d\n", num);

    fscanf(pointer, "%d", &num);
    printf("the value of num is : %d\n", num);

    fscanf(pointer, "%d", &num);
    printf("the value of num is : %d\n", num);

    fscanf(pointer, "%d", &num);
    printf("the value of num is : %d\n", num);

    fclose(pointer);  //closing the file after use

    return 0;
}