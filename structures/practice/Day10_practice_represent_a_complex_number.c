#include <stdio.h>
#include <string.h>

typedef struct complex_number  //structure to store real and imaginary component of complex number
{
    int r;
    int i;
} cn;

int main() 
{
    cn number; //declearing variables

    printf("enter the real components of complex number (with sign)\n");  //getting real part
    printf("real component : ");
    scanf("%d", &number.r);

    printf("enter the imaginary components of second vector (with sign)\n");  //getting imaginary part
    printf("imaginary component : ");
    scanf("%d", &number.i);

    printf("the complex number is : %d%+di\n",number.r,number.i);  //printing the complex number

    return 0;
}
