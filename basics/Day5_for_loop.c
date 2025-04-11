#include<stdio.h>

int main(){

    int n,i;

    printf("enter the number till you want to print natural numbers\n");
        scanf("%d",&n);

    for (i=1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}