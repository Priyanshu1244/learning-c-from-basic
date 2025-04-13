#include <stdio.h>

int main()
{

    int i = 5; // int type variable

    int *a = &i; // pointer to store int type variable

    // print the address of a variable buy using adress operator(& is address operator)
    printf("the address of i is : %p\n", &i); // hexadecimal form of address
    printf("the address of i is : %d\n", &i); // intiger form of address

    // print the address of a variable by using pointer
    printf("the address of i is : %p\n", a); // hexadecimal form of address
    printf("the address of i is : %d\n", a); // intiger form of address

    // print the value at that address
    printf("the value at that address : %d\n", *(&i)); // by using address of int i
    printf("the value at that address : %d\n", *a);    // by using address stored in pointer a

    return 0;
}