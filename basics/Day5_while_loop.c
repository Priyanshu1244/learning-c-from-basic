#include<stdio.h>

int main(){

    int count;
    printf("enter the number you want till counting\n");
    scanf("%d",&count);

    int i = 1;
    
    while(i<=count){
        printf("%d\n",i);
        i++;
    }
}