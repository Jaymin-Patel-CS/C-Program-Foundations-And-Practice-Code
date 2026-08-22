#include <stdio.h>
#include <string.h>

typedef struct account 
{
    int accnum;
    char name[20];
    int bankbalance;
}acc;

void display (acc p)
{
    printf ("the data of the member whose account number is %d\n",p.accnum);
    printf ("account number is : %d\n",p.accnum);
    printf ("owners name is : %s\n",p.name);
    printf ("account bank balance is : %d\n",p.bankbalance);
}

int main() {
    acc p1 , p2 , p3;
    p1.accnum = 111;
    strcpy (p1.name,"jjj");
    p1.bankbalance = 100000;
    p2.accnum = 222;
    strcpy (p2.name,"ppp");
    p2.bankbalance = 1000000;
    p3.accnum = 333;
    strcpy (p3.name,"aaa");
    p3.bankbalance = 10000;
    int a ; 
    printf ("Enter the account number of which you have to see data.\n");
    scanf ("%d",&a);
    if (a==111)
    {
        display(p1);
    }else if (a==222)
    {
        display(p2);
    }else if (a==333)
    {
        display(p3);
    }else {printf ("your entered account number doesn't exist.");}

    return 0;
}