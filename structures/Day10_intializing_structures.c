#include<stdio.h>
#include<string.h>


struct address{ //creating a user defined datatype to store address

    int house_no;
    int block_no;
    char city[50];
    char state[50];
};

int main(){

    struct address add1 = {5,2,"mumbai","maharastra"}; //declearing and intializing structures

    //priniting the values
    printf("address of rajat house is : house no %d , block %d, %s, %s \n",add1.house_no,add1.block_no,add1.city,add1.state);

    struct address add2 = {0}; //set all values to 0

    //print 0 or null as details are set to null
    printf("defalult address in add 2 is :  house no %d , block %d, %s, %s \n",add2.house_no,add2.block_no,add2.city,add2.state);
}