#include<stdio.h>

int main(){

    //declearing a
    int a;  


    //running each assignment operator

    a=10;
    printf("%d\n",a);   // 10 is assigned to a

    a+=10;
    printf("%d\n",a);   // a=a+10 

    a-=10;
    printf("%d\n",a);   // a=a-10

    a*=2;
    printf("%d\n",a);   // a=a*2

    a/=2;
    printf("%d\n",a);   // a=a/2

    a%=4;
    printf("%d\n",a);   // a=a%4  (remainder after a gets divide by 4)


    printf("___________________________________________________________________________________");

    return 0;

}