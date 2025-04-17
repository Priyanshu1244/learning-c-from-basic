#include <stdio.h>

int main()
{

    FILE *pointer;                       // creating a file type pointer
    pointer = fopen("text.txt", "w");    // statement to open a file in write mode

    printf("enter the number you want to save in text.txt\n");  //asking user for input to save in file
    int num; 
    scanf("%d", &num);  

    //this will completely erase the previous data stored before in the file
    fprintf(pointer, "%d", num);  //saving input in a file using fprintf functions

    printf("you text has been saved in text.txt file\n"); 
    
    return 0;
}