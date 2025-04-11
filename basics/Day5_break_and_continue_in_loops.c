#include<stdio.h>

int main(){

    int n,i;

    printf("enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i==5){
            continue;
        }
        if(i==15){
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}