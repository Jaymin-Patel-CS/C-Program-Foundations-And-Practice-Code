// multable storing in arr by function.
#include <stdio.h>

int multable (int arr[][10],int n,int level){
   
    for (int i = 0;i < 10;i++)
    {
        arr[level-1][i] = n*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf ("%d x %d = %d\n",n,i+1,arr[level-1][i]);
    }
    
    
}

int main() {
    int arr[3][10];
    int n,level;
    printf ("enter the number , of which you have to print table.");
    scanf("%d",&n);
    printf ("enter the level on which you have to store the table.");
    scanf("%d",&level);
    multable(arr,n,level);
    printf("the thord element of given level is %d\n",arr[level-1][2]);
    return 0;
}