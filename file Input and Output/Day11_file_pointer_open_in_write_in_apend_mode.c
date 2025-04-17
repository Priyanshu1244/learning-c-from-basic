#include <stdio.h>

int main()
{

    FILE *pointer;                    // creation pointer pointing toward the address of file
    pointer = fopen("text.txt", "a"); // open file in apend mode

    int num;
    printf("enter the number you want to store in file\n"); // getting input to write in file
    scanf("%d", &num);

    fprintf(pointer, "%d", num); // updating file without deleting the previous text

    printf("you file has been updated without erasing the previous data\n");

    return 0;
}