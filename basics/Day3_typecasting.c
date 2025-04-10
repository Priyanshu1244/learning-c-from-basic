#include <stdio.h>

int main(){



    // implicit type casting
    int a = 5;
    float b = 2;

    printf("the result for int + float is :%f  (it's a float)\n", a / b);



    // explicit type casting
    int c = 5;
    int d = 2;

    printf("the result for int + int should be int but it is :%f (its also a float because we convert it manually)\n", (float)c / d);


    return 0;
}
