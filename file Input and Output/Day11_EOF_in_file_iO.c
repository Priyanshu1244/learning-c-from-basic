#include <stdio.h>

int main()
{
    FILE *pointer;
    pointer = fopen("text.txt", "r");

    char ch;
    while (ch != EOF)
    {

        ch = fgetc(pointer);
        printf("%c", ch);
        
    }

    fclose(pointer);

    return 0;
}