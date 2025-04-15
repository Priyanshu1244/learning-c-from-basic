#include <stdio.h>
#include <string.h>

int main()
{

    //declearing strings
    char str1[6];  
    char str2[6];

    //getting input for both strings
    printf("enter values for 1st string\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str1[i]);
        fflush(stdin);
    }
    str1[5]='\0';
    printf("enter values for 2nd string\n");
    for (int j = 0; j < 5; j++)
    {
        scanf("%c", &str2[j]);
        fflush(stdin);

    }
    str2[5]='\0';

    //comparing both string with a library function
    int a =strcmp(str1,str2);
    if(a==0){
        printf("both strings are equal\n");
    }else{
        printf("both strings are not equal\n");
    }

    return 0;
}