#include <stdio.h>

int check_presence(char str[], char ch);  //function prototype

int main()
{

    //declearing string and variables
    char str[] = {"C is an intresting language"};
    char ch;

    printf("enter the charcter to check if its present or not in string\n");  //asking user for character to check its presence
    scanf(" %c", &ch); 

    int n = check_presence(str, ch); //calling function and getting answer

    if(n==1){
    printf("the character '%c' is present in string\n", ch);  //printing the answer
    }
    else{
        printf("you inserted character is not present in string\n");
    }

    return 0;
}

int check_presence(char str[], char ch)  //function to check presence
{

    int presence = 0;

    for (int i = 0; str[i] != '\0'; i++)  //loop to increment presence each time when character mathes an element of string
    {

        if (str[i] == ch)
        {
            presence=1;
        }
        else
        {
            continue;
        }
    }
    return presence; //returning answer
}
