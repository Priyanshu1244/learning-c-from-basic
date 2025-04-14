#include<stdio.h>

void double_array(int*arr); //function prototype

int main(){

    int arr[5] = {2,4,6,8,10}; //declearing and intializing array

    double_array(arr); //calling function to update/double the value of each element of array

    //printing the updated value
    printf("double of 0th element of array is : %d\n",arr[0]);

    printf("double of 1st element of array is : %d\n",arr[1]);

    printf("double of 2nd element of array is : %d\n",arr[2]);

    printf("double of 3rd element of array is : %d\n",arr[3]);

    printf("double of 4th element of array is : %d\n",arr[4]);

    return 0;
}

void double_array(int* arr){       //address of array is provided, function should update the value
    for (int i = 0; i < 5; i++)
    {
        arr[i]=2*arr[i];
    }
    
}