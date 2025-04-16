#include <stdio.h>
#include <string.h>

struct date
{
    int yyyy;
    int mm;
    int dd;
};

int compare(struct date d1, struct date d2);

int main()
{

    struct date d1, d2;

    printf("enter the first date\n");
    printf("yyyy/mm/dd : \n");
    scanf("%d/%d/%d", &d1.yyyy, &d1.mm, &d1.dd);

    printf("enter the second date\n");
    printf("yyyy/mm/dd : \n");
    scanf("%d/%d/%d", &d2.yyyy, &d2.mm, &d2.dd);

    int a = compare(d1, d2);

    switch (a)
    {
    case 1:
        printf("both dates are equal\n");
        break;
    case 2:
        printf("the dates are unequal\n");
        break;
    case 3:
        printf("the dates are unequal\n");
        break;
    case 4:
        printf("the dates are unequal\n");
        break;
    case 5:
        printf("the dates are unequal\n");
        break;
    case 6:
        printf("the dates are unequal\n");
        break;
    case 7:
        printf("the dates are unequal\n");
        break;
    default:
        printf("something wrong with the program, exiting program\n");
        break;
    }

    return 0;
}

int compare(struct date d1, struct date d2)
{
    if (d1.yyyy == d2.yyyy &&d1.mm == d2.mm && d1.dd == d2.dd)
    {
        return 1;
    }
    else if (d1.yyyy > d2.yyyy)
    {
        return 2;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return 3;
    }
    else if (d1.mm > d2.mm)
    {
        return 4;
    }
    else if (d1.mm < d2.mm)
    {
        return 5;
    }
    else if (d1.dd > d2.dd)
    {
        return 6;
    }
    else if (d1.dd < d2.dd)
    {
        return 7;
    }
}
