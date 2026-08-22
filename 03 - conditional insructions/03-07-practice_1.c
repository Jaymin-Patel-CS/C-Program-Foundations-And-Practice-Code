// pass or fail 
#include <stdio.h>

int main()
{
    int maths, science, english;

    printf("enter marks of maths out of 100(otherwise in percentage)\n");
    scanf("%d", &maths);
    printf("enter marks of science out of 100(otherwise in percentage)\n");
    scanf("%d", &science);
    printf("enter marks of english out of 100(otherwise in percentage)\n");
    scanf("%d", &english);

    if (maths >= 33 && science >= 33 && english >= 33 && (((maths + science + english) *100) / 300)>=40)
    {
        printf("you had passed\n");
    }
    else
    {
        printf("you had failed\n");
    }

    return 0;
}