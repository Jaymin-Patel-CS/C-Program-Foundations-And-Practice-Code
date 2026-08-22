// two employee.
#include <stdio.h>

typedef struct employee 
{
    int salary;
    char name [30];
}emp;


int main() {
    FILE *ptr;
    ptr = fopen("pr 5 two employee.txt","w");

    int n ;
    printf ("Enter the no of employee of which you have to enter the data.");
    scanf ("%d",&n);

    emp e[n];

    for (int i = 0; i < n ;i++)
    {
        printf ("Enter the name of the employee number %d.\n",i+1);
        scanf ("%s",e[i].name);
        printf ("Enter the salary of the employee number %d.\n",i+1);
        scanf ("%d",&e[i].salary);
    }
    for (int j = 0; j < n; j++)
    {
        printf ("%s\n",e[j].name);
        printf ("%d\n",e[j].salary);
    }
    for (int k = 0; k < n; k++)
    {
        fprintf (ptr,"The employee number %d\n",k+1);
        fprintf (ptr,"NAME : %s\n",e[k].name);
        fprintf (ptr , "SALARY : %d\n",e[k].salary);
    }
    
    



//    printf ("%s",e[0].name);
//    printf ("%d",e[0].salary);
    
    return 0;
}