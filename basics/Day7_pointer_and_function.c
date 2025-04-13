#include <stdio.h>

void changevalue(int *a, int *b);  //function prototype

int main()
{

    int a = 5;

    int b = 4;

    changevalue(&a, &b);  //calling by reference not value (sending address as parameter, not copy of a and b)

    printf("value of a is %d\n", a);  //printing the updated values
    printf("value of b is %d\n", b);

    return 0;
}

void changevalue(int *a, int *b)   //function logic
{

    *a = 10;    //this function will change the value of actual a and b because this function is called by refernce not value
    *b = 8;
}
