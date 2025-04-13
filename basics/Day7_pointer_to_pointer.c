#include <stdio.h>

int main()
{

    int i = 5; // int type variable

    int *ptr1 = &i;     // pointer to store the address of int type variable
    int *ptr2 = &ptr1;  // pointer to store the address of pointer that stores the address of variable
    int *ptr3 = &ptr2;  // pointer to store the address of pointer that stores the address of pointer that stores the address of variable

    printf("address of i is : %p and the value it stores is %d\n",&i,*(&i));

    printf("address of ptr 1 is : %p and the value it stores is %p\n",&ptr1,*(&ptr1));

    printf("address of ptr 2 is : %p and the value it stores is %p\n",&ptr2,*(&ptr2));

    printf("address of ptr 3 is : %p and the value it stores is %p\n",&ptr3,*(&ptr3));


    return 0;
}