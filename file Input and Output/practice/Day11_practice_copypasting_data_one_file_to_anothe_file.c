#include <stdio.h>
#include <string.h>

int main()
{

    FILE *fp1;
    fp1 = fopen("text.txt", "r");
    FILE *fp2;
    fp2 = fopen("text2.txt", "w");

    char ch;
    while(1){
        ch = fgetc(fp1);

        if(ch==EOF){
            break;
        }
        else{
            fputc(ch,fp2);
        }
    }
    
    fclose(fp1);
    fclose(fp2);

    printf("your data has been copied from 1st file to 2nd file\n");
    return 0;
}