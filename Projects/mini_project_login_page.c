#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct user_data
{
    int number;
    char password[50];
    char user_name[150];
    char fathers_name[150];
    char mothers_name[150];
    char address[300];

} UD;

UD u1;

void signup();
void login();
void home();
void display_details();
void update_details();

int main()
{

    int user_input;
    while (1)
    {

        printf("\n\n\n--------------------MAIN MEN------------------------\n");
        printf("chosse one of the options from below : \n");

        while (1)
        {

            printf("1-signup\n2-log in\n0-exit\n");
            printf("input : ");
            scanf("%d", &user_input);

            if (user_input == 1)
            {
                signup();
                break;
            }
            else if (user_input == 2)
            {
                login();
            }
            else if (user_input == 0)
            {
                printf("exiting program\n");
                exit(0);
            }
            else
            {
                printf("\n\ninvalid input!!! chosse one from the given options\n\n");
            }
        }
    }

    return 0;
}

void signup()
{

    char pass[50];
    char confirm_pass[50];

    printf("\n-------------------SIGN UP----------------\n\n");
    printf("enter you mobile number : ");
    scanf("%d", &u1.number);

    while (1)
    {
        printf("enter you password \n");
        printf("keep in mind that : \npassword must be atleast 10 and atmost 50 charcters\n");
        fflush(stdin);
        gets(pass);

        printf("enter you password again to confirm you password\n");
        gets(confirm_pass);

        if (strcmp(pass, confirm_pass) != 0)
        {
            printf("password and confirm password doesn't match\nTRY AGAIN!!\n\n");
        }
        else if (strlen(pass) < 10)
        {
            printf("you password is too short\nTRY AGAIN!!\n\n");
        }
        else if (strlen(pass) > 50)
        {
            printf("you password is too long\nTRY AGAIN\n\n");
        }
        else
        {
            strcpy(u1.password, pass);
            printf("you have sucessfully signed up\n");
            printf("REDIRECTING YOU TO MAIN MENU");
            break;
        }
    }
}

void login()
{
    int num;
    char pass[50];
    printf("enter you number : ");
    scanf("%d", &num);
    printf("enter you password : ");
    fflush(stdin);
    gets(pass);

    if (num == u1.number && strcmp(pass, u1.password) == 0)
    {
        printf("\n--------you have sucessfully logged in.-----------\n\n");
        printf("HOME PAGE\n");
        home();
        printf("\n\n\n--------------------MAIN MEN------------------------\n");
    }
    else
    {
        printf("login unsucessful, please check you number and password and try again.\n");
        printf("\n\n\n--------------------MAIN MEN------------------------\n");
        printf("chosse one of the options from below : \n");
    }
}

void home()
{
    int user_input;

    printf("chose a option according to your quirey\n");

    while (1)
    {

        printf("1-see personal details\n2-update peronal details\n3-logout and go back to main menu\n0-exit program immediately\n");
        printf("input: ");
        scanf("%d", &user_input);

        switch (user_input)
        {
        case 1:
            display_details();
            break;
        case 2:
            update_details();
            break;
        case 3:
            return;
            break;
        case 0:
            printf("exiting program\n");
            exit(0);
        default:
            printf("invalid input!!! TRY AGAIN\n");
        }
    }
}

void display_details()
{
    printf("-------------------------------------------------------------------\n");
    printf("PERSONAL DETAILS : \n");
    printf("Name : %s\n", u1.user_name);
    printf("Number : %d\n", u1.number);
    printf("Father's name : %s\n", u1.fathers_name);
    printf("Mother's name : %s\n", u1.mothers_name);
    printf("Address : %s\n", u1.address);
    printf("-------------------------------------------------------------------\n");

    return;
}

void update_details()
{

    int user_input;

    while (1)
    {
        printf("-------------------------------------------------------------------\n");
        printf("UPDATE DETAILS : \n");
        printf("1- to update user name\n2-to update father's name\n3-to update mother's name\n4-to update address\n0-go back to HOME page\n");
        printf("input : ");
        scanf("%d", &user_input);

        switch (user_input)
        {
        case 1:
            printf("old user name : %s\n", u1.user_name);
            printf("enter new user name : ");
            fflush(stdin);
            gets(u1.user_name);
            printf("you user name has successfuly updated\n");
           
            break;

        case 2:
            printf("old father's name : %s\n", u1.fathers_name);
            printf("enter new father's name : ");
            fflush(stdin);
            gets(u1.fathers_name);
            printf("you user father's name has successfuly updated\n");
           
            break;
        case 3:
            printf("old mother's name : %s\n", u1.mothers_name);
            printf("enter new new mother's name : ");
            fflush(stdin);
            gets(u1.mothers_name);
            printf("you mother's name has successfuly updated\n");
           
            break;
        case 4:
            printf("old address : %s\n", u1.address);
            printf("enter new addresss  : ");
            fflush(stdin);
            gets(u1.address);
            printf("you address has successfuly updated\n");
            
            break;
        case 0:
        printf("-------------------------------------------------------------------\n");
            return;
            break;
        default:
            printf("invalid input!! TRY AGAIN\n");
        }
    }
}
