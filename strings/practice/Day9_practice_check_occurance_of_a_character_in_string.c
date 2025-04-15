#include <stdio.h>

int check_occurance(char str[], char ch);  //function prototype

int main()
{

    //declearing string and variables
    char str[] = {"C is an intresting language"};
    char ch;

    printf("enter the charcter whose occurance you want to check in string\n");  //asking user for character to check its occurance
    scanf(" %c", &ch); 

    int n = check_occurance(str, ch); //calling function and getting answer

    printf("the number of times %c has appeared in string is : %d \n", ch, n);  //printing the answer

    return 0;
}

int check_occurance(char str[], char ch)  //function to check occurance
{

    int occurance = 0;

    for (int i = 0; str[i] != '\0'; i++)  //loop to increment occurance each time when character mathes an element of string
    {

        if (str[i] == ch)
        {
            occurance++;
        }
        else
        {
            continue;
        }
    }
    return occurance; //returning answer
}
