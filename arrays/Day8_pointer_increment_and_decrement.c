#include <stdio.h>

int main()
{

    // increment and decrement for int types pointer

    int num1 = 10;
    int *ptr1 = &num1;

    printf("adress of num (int) is : %u \n", ptr1); // prints the address of num stored in ptr

    ptr1++; // increment the pointer by 4 (because its a int pointer and int takes 4 bytes)

    printf("incremented adress of num (int) is : %u \n", ptr1); // prints the incremented address, and the diff will be 4 byte

    ptr1--;

    printf("decremented address of num (int) : %u \n", ptr1); // orginial value of pointer

    printf("___________________________________________________________________________________________\n");

    // increment and decrement for float types pointer

    float num2 = 25.750;
    float *ptr2 = &num2;

    printf("adress of num (float) is : %u \n", ptr2); // prints the address of num stored in ptr2

    ptr2++; // increment the pointer by 4 (because its a float pointer and float takes 4 bytes)

    printf("incremented adress of num (float) is : %u \n", ptr2); // prints the incremented address, and the diff will be 4 bytes

    ptr2--;

    printf("decremented address of num (float) : %u \n", ptr2); // orginial value of pointer

    printf("___________________________________________________________________________________________\n");

    // increment and decrement for double types pointer

    double num3 = 10;
    double *ptr3 = &num3;

    printf("adress of num (double) is : %u \n", ptr3); // prints the address of num stored in ptr3

    ptr3++; // increment the pointer by 4 (because its a double pointer and double takes 8 bytes)

    printf("incremented adress of num (double) is : %u \n", ptr3); // prints the incremented address, and the diff will be 8 bytes

    ptr3--;

    printf("decremented address of num (double) : %u \n", ptr3); // orginial value of pointer

    printf("___________________________________________________________________________________________\n");

    // increment and decrement for char types pointer

    char ch = 10;
    char *ptr4 = &ch;

    printf("adress of character is : %u \n", ptr4); // prints the address of num stored in ptr

    ptr4++; // increment the pointer by 4 (because its a char pointer and char takes 1 bytes)

    printf("incremented adress of character is : %u \n", ptr4); // prints the incremented address, and the diff will be 1 bytes

    ptr4--;

    printf("decremented address of character is : %u \n", ptr4); // orginial value of pointer

    printf("___________________________________________________________________________________________\n");

    return 0;
}