#include <stdio.h>

int main()
{
    FILE *pointer;
    pointer = fopen("text.txt", "r");

    //using fgetc to get a character from the file
    char c = fgetc(pointer);
    printf("%c", c);
    fclose(pointer);

    //using fputc to write a character in the file
    pointer = fopen("text.txt", "w");
    char ch = '$';
    fputc(ch, pointer);

    return 0;
}