#include<stdio.h>

int main(){

    //declearing variables
    int a = 5;
    int b = 10;

    //using each relation operator

    printf("%d\n",a==a);   //true
    printf("%d\n",a==b);   //false

    printf("%d\n",a!=b);   //true
    printf("%d\n",a!=a);   //false

    printf("%d\n",b>a);    //true
    printf("%d\n",a>b);    //false

    printf("%d\n",a<b);    //true
    printf("%d\n",b<a);    //false

    printf("%d\n",b>=a);   //true
    printf("%d\n",a>=b);   //false
    
    printf("%d\n",a<=b);   //true
    printf("%d\n",b<=a);   //false

    return 0;

}