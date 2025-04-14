#include <stdio.h>

void reverse_array(int array[],int n);

int main()
{

    int array[5] = {1, 2, 3, 4, 5};

    for(int i=0;i<5;i++){
        printf("%d ",array[i]);
    }

    printf("\n");
    reverse_array(array,5);

    for(int i=0;i<5;i++){
        printf("%d ",array[i]);
    }

    return 0;
}

void reverse_array(int array[],int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    { 
        temp = array[n-i-1];
        array[n-i-1]=array[i];
        array[i]=temp;
    }

}