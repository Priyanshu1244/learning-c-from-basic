#include<stdio.h>

int main(){

    int a = 4;
    int b = 8;

    int *ptr_a = &a;
    int *ptr_b = &b;

    // pointer + int
    printf("address stored in ptr_a is = %u\n",ptr_a);
    printf("address stored in ptr_a + 2  is = %u\n",ptr_a + 2);  //it will increase to 8 bytes (2x4(int size))

    printf("___________________________________________________________________________________________\n");

    // pointer - int
    printf("address stored in ptr_a is = %u\n",ptr_a);
    printf("address stored in ptr_a - 2  is = %u\n",ptr_a - 2);  //it will decrease to 8 bytes (-2x4(int size))

    printf("___________________________________________________________________________________________\n");

    // pointer - pointer
    printf("address stored in ptr_a is = %u\n",ptr_a);
    printf("difference between ptr_a and ptr_b is = %u\n",ptr_a - ptr_b);  //this differnce will be 1 as 4byte is 1 int
    
    // pointer + pointer DOESN'T exist

    //arthmetic operation for char, float , double will take place the same way but the answer depends on size of datatye

    return 0;

}