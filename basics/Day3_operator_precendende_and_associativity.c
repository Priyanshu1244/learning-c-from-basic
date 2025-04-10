#include<stdio.h>

int main(){

    int a,b,c;
    a=3;
    b=6;
    c=9;

    printf("%d\n",a+b*c);    //its calculated as 3+(6*9) as precendece rule is followed

    printf("%d\n",b*c/a);    //its calcualted as 6*9/3 as operator with same precendence are there so assciativity rule got applied
                             //calculated took place left to right

    return 0;
}