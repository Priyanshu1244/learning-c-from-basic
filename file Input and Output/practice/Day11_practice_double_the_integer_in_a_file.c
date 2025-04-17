#include <stdio.h>

int main()
{

    // opening file in read mode
    FILE *pointer;
    pointer = fopen("text.txt", "r");

    // getting integer from file and making it twice
    int num;
    fscanf(pointer, "%d", &num);
    num = num * 2;

    // printing the integer
    printf("the twice of the number in txt file is : %d\n", num);

    // closing the file
    fclose(pointer);

    return 0;
}