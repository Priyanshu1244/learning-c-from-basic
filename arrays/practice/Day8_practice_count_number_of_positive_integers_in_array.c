#include<stdio.h>

int main(){

    int roll_no[10]={12,-11,-24,4,7,17,15,-28,-31,10};
    int count_positive=0;
    for(int i=0;i<10;i++){
        if(roll_no[i]>0){
            count_positive++;
        }else{
            continue;
        }
        

    }
    printf("%d",count_positive);
    return 0;
}