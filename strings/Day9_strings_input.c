#include<stdio.h>

int main(){

    //declaring strings
    char string1[14];  //for first name
    char string2[14];  //for last name

    printf("enter your first name : ");  //input for first name from user
    scanf("%s",string1);
    printf("enter your last name : ");   //input for last name from user
    scanf("%s",string2);

    printf("your full name is %s %s",string1,string2);  //scanf cannot take strings with spaces in between, so two strings are used(one for each word)


    return 0;
}