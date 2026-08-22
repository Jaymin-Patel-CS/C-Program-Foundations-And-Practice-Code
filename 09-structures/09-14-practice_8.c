#include <stdio.h>
#include <string.h>

typedef struct time
{
    int hour;
    int minute;
    int second;
}time;


int timecmp (time t1 , time t2)
{
    if (t1.hour>t2.hour)
    {
        return 1;
    }
    if (t1.hour<t2.hour)
    {
        return -1;
    }

    if (t1.minute>t2.minute)
    {
        return 1;
    }
    if (t1.minute<t2.minute)
    {
        return -1;
    }

    if (t1.second>t2.second)
    {
        return 1;
    }
    if (t1.second<t2.second)
    {
        return -1;
    }
    return 0;
}

int main() {
    time t1 = {2,11,23};
    time t2 = {2,12,23};
    printf ("%d/%d/%d\n",t1.hour,t1.minute,t1.second);
    printf ("%d/%d/%d\n",t2.hour,t2.minute,t2.second);
    printf ("if comes 1 then the t1 is bigger\nif comes -1 then the t2 is bigger\nif 0 comes then both are equal.\n");
    int a = timecmp(t1,t2);
    printf ("result = %d",a);
    return 0;
}