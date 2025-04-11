#include<stdio.h>

int main(){

    char ch;
    printf("enter a charcter\n");
    scanf(" %c",&ch);

    if(ch>='A'&&ch<='Z'){
        printf("charcter is uppercase\n");
    }
    else if(ch>='a'&&ch<='z'){
        printf("character is lowercase\n");
    }
    else{
        printf("character is not an alphabet\n");
    }

    return 0;

}