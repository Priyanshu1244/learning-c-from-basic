#include <stdio.h>
#include <string.h>

int main()
{

    char str1[] = {"C is a low level language"};
    char str2[30];
    char str3[75] = {"C is great and "};

    // STRLEN  (calculate the length of a string)
    int length_of_string = strlen(str1);
    printf("length of sting is %d\n", length_of_string);

    // STRCPY (copy second string into first string (str1 int str2 in this case) , first string must have enough space for this)
    strcpy(str2, str1);
    puts(str2);

    // STRCAT (concatenate two strings, without spaces)
    strcat(str3, str2);
    puts(str3);

    // STRCMP (compare two string, on the basic of ASCII value of 1st alphabet of each strings)
    int a = strcmp("hello", "bye");
    printf("string 1 is greater string 2 in terms of ASCII value : %d (postive)\n", a); // give postive if(str1>str2)
    int b = strcmp("bye", "hello");
    printf("string 2 is greater string 1 in terms of ASCII value : %d (negative)\n", b); // give negative if(str2>str1)

    return 0;
}