#include <stdio.h>
#include <string.h>

typedef struct date
{
    int day;
    int month;
    int year;
}date;


int datecmp (date d1 , date d2)
{
    if (d1.year>d2.year)
    {
        return 1;
    }
    if (d1.year<d2.year)
    {
        return -1;
    }

    if (d1.month>d2.month)
    {
        return 1;
    }
    if (d1.month<d2.month)
    {
        return -1;
    }

    if (d1.day>d2.day)
    {
        return 1;
    }
    if (d1.day<d2.day)
    {
        return -1;
    }
    return 0;
}

int main() {
    date d1 = {2,11,23};
    date d2 = {2,12,23};
    printf ("%d/%d/%d\n",d1.day,d1.month,d1.year);
    printf ("%d/%d/%d\n",d2.day,d2.month,d2.year);
    printf ("if comes 1 then the d1 is bigger\nif comes -1 then the d2 is bigger\nif 0 comes then both are equal.\n");
    int a = datecmp(d1,d2);
    printf ("result = %d",a);
    return 0;
}