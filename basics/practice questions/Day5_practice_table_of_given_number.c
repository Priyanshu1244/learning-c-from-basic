#include<stdio.h>

int main(){

    int num;
    printf("enter the number whose table you want\n");
    scanf("%d",&num);

    int i=1;

    while(i<=20){
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }
}