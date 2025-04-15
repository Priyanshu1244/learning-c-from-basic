#include <stdio.h>

int main()
{

    // while working with strings, gets()\fgets() and puts() are advised to used over scanf() and printf()

    char string1[15];
    char string2[15];

    //gets and puts
    gets(string1);  //scans both single and multi word strings
    puts(string1);  //prints the string and put cursor on next line
    printf("string 1 is : %s\n",string1);  //use printf if something with string is needed to print

    //fgets and puts
    fgets(string2,sizeof(string2),stdin);  //scans both single and multi word strings also consider the size of sting unlike gets(), advised to use fgets over gets
    puts(string2);  //prints the string and put cursor on next line
    printf("string 2 is : %s\n",string2);  //use printf if something with string is needed to print
 
    return 0;
}