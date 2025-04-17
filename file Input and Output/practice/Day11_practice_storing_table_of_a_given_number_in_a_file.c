#include<stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("text.txt","w");

    int num;
    printf("enter the number to store its table in the file\n");
    scanf("%d",&num);

    for(int i = 0; i<10; i++){

        int table = num * (i+1);
        fprintf(ptr,"%d",table);
        fputc('\n',ptr);
        
    }
}