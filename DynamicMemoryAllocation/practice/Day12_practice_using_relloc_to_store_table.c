#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the number whose table you want to store: ");
    scanf("%d",&n);
    int *pointer;
    pointer = (int *)calloc(10, sizeof(int));

    // intialize
    for (int i = 0; i < 10; i++)
    {
        pointer[i]=n*(i+1);
    }

    pointer = realloc(pointer, 20 * sizeof(int));

    // re-intialize
    for (int i = 0; i < 20; i++)
    {
        pointer[i]=n*(i+1);
    }

    // printing
    for (int i = 0; i < 20; i++)
    {

        printf("%dx%d=%d\n",n, i+1, pointer[i]);
    }

    free(pointer);

    return 0;
}