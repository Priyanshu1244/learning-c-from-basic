#include <stdio.h>

int main(){

    FILE *pointer;  //creating a file type pointer
    pointer = fopen("text.txt", "r");  //statement to open a file in read mode 
    
    int num;
    char ch;
    
    //storing the integer in temproray varaible using fscanf function and printing them

    fscanf(pointer, "%d", &num);
    printf("the value of num is : %d\n", num);  //for interger 
    
    fscanf(pointer, "%d", &num);
    printf("the value of num is : %d\n", num);  //for interger 
    
    fscanf(pointer, "%d", &num);
    printf("the value of num is : %d\n", num);  //for interger 
    
    fscanf(pointer, "%d", &num);
    printf("the value of num is : %d\n", num);  //for interger 
    
    fscanf(pointer, "%d", &num);
    printf("the value of num is : %d\n", num);  //for interger 

    fscanf(pointer, "%c", &ch);
    printf("the value of char is : %c\n", ch);  //for character 

    fscanf(pointer, "%c", &ch);
    printf("the value of char is : %c\n", ch);  //for character 

    fscanf(pointer, "%c", &ch);
    printf("the value of char is : %c\n", ch);  //for character 
 
    fscanf(pointer, "%c", &ch);
    printf("the value of char is : %c\n", ch);  //for character 

    fscanf(pointer, "%c", &ch);
    printf("the value of char is : %c\n", ch);  //for character 
    
    fclose(pointer);  //closing the file after use
    
    return 0;
}