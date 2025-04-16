#include <stdio.h>
#include <stdio.h>

typedef struct bank_account
{ // structure to store bank details
    int acc_no;
    char name[50];
    char address[50];
    char IFSC_CODE[20];
} ba;

int main()
{

    ba arr[20]; // array to store details of 20 person

    for (int i = 0; i < 20; i++) // asking bank details for all person one by one
    {
        printf("enter account details for person %d\n", i + 1);
        printf("account number : ");
        scanf("%d", &arr[i].acc_no);
        getchar();
        printf("name : ");
        fgets(arr[i].name, sizeof(arr[i]), stdin);
        printf("address : ");
        fgets(arr[i].address, sizeof(arr[i]), stdin);
        printf("IFSC code : ");
        fgets(arr[i].IFSC_CODE, sizeof(arr[i]), stdin);
    }

    return 0;
}