#include<stdio.h>
#include<string.h>

typedef struct vector_components  //datatype to store vector component
{
    int i;
    int j;
    int k;
}vc;

void vector_sum(vc v1, vc v2);   //function prototype

int main(){

    vc v1,v2; //decleaing variables

    printf("enter the components of first vector (with sign)\n");  //getting first vector components
    printf("i component : ");
    scanf("%d",&v1.i);
    printf("j component : ");
    scanf("%d",&v1.j);
    printf("k component : ");
    scanf("%d",&v1.k);

    printf("enter the components of second vector (with sign)\n");  //getting second vector components
    printf("i component : ");
    scanf("%d",&v2.i);
    printf("j component : ");
    scanf("%d",&v2.j);
    printf("k component : ");
    scanf("%d",&v2.k);

    vector_sum(v1,v2); //calling function to print sum

    return 0;
}

void vector_sum(vc v1, vc v2){  //adding and printing sum
    int i = v1.i + v2.i; 
    int j = v1.j + v2.j;
    int k = v1.k + v2.k;

    printf("the sum of vectors are : %di%+dk%+dj\n",i,j,k);
}