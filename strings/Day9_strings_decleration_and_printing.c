#include <stdio.h>

int main()
{

    char string1[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // declearing string (mehtod 1)
    char string[] = {"HELLO"};                        // declearing string (method 2, efficient)

    for (int i = 0; string[i] != '\0'; i++)
    { // using for loop to print the string (method 1)

        printf("%c", string1[i]);
        
    }

    printf("\n%s\n", string1); // using %s to print string (method 2, efficient)
    printf("%s", string);

    return 0;
}