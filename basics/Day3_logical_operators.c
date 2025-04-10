#include<stdio.h>

int main(){

    int a,b,c,d;
    a=b=5;
    c=d=10;

    //AND operator (TRUE if both conditions are true)
    printf("%d\n",(a==b)&&(a<c));   //TRUE as both are true
    printf("%d\n",(a==b)&&(a>c));   //FALSE as only one of them is true
    printf("%d\n",(a==c)&&(a>d));   //FALSE as both are false

    //OR operator (TRUE if any one of conditions are true)
    printf("%d\n",(a==b)||(a<c));   //TRUE as both are true
    printf("%d\n",(a==b)||(a>c));   //TRUE as one of them is true
    printf("%d\n",(a==c)||(a>d));   //FALSE as both are false

    //NOT operator (reverse the output)
    printf("%d\n",!((a==b)&&(a<c)));   //TRUE as both are true
    printf("%d\n",!((a==b)&&(a>c)));   //TRUE as one of them is true
    printf("%d\n",!((a==c)&&(a>d)));   //FALSE as both are false
    
    return 0;
}