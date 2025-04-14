#include <stdio.h>

int main()
{

    // declearing an array and inserting values

    int roll_no[10] = {12, 11, 24, 4, 7, 17, 15, 28, 31, 10};

    int *ptr = roll_no;

    for (int i = 0; i < 10 ; i++ )  //getting value of each elements of the array buy using pointer
    {
        printf("address of %d element of array roll no. is : %d\n",i,ptr+i);
        printf("value of %d element of array roll no. is : %d\n",i,*(ptr+i));
        printf("\n");
    }
    

    return 0;
}