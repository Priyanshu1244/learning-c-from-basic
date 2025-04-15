#include <stdio.h>
#include <string.h>

// function prototype
void encryption(char str[]);
void decryption(char str[]);

int main()
{

    //asking user his query
    int choice;
    printf("welcome to text encryption and decryption\nenter a option to continue\n");
    printf("1-decrypted to incrypted\n2-incrypted to decrypted\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        char str[501]; // normal to incrypted
        getchar();
        printf("enter you text to get an encrypted version of it(maximum 500 words, including spaces\n");
        fgets(str, sizeof(str), stdin);

        encryption(str);

        puts(str);
        break;
    }
    
    case 2:
    {
        char str_[501]; // encrypted to normal
        getchar();
        printf("enter you text to get an decrypted version of it(maximum 500 words, including spaces\n");
        fgets(str_, sizeof(str_), stdin);
        decryption(str_);
        puts(str_);
        break;
    }
    default:
        printf("invalid choice. exiting program\n");  //if none of the choices matched
        break;
    }

    return 0;
}

void encryption(char str[]) //function to encrypt text 
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]++;
    }
}

void decryption(char str_[]) //function to decrypt text
{
    for (int i = 0; i < strlen(str_); i++)
    {
        str_[i]--;
    }
}