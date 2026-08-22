#include <stdio.h>
#include <stdlib.h>         // header files.
#include <time.h>

int main() {
    int number , guess , nguess = 1;
    srand (time(0));
    number =  (rand()%100) + 1;
    // printf ("the number is %d\n",number);

    do
    {
        printf ("enter your guessed number\n");
        scanf ("%d",&guess);

        if (guess < number)
        {
            printf ("try the higher number\n");
        }
        else if (guess > number)
        {
            printf ("try the lower number\n");
        }
        else
        {
            printf ("you got it! the answer is %d. you guessed in %d times\n",number,nguess);
        }
        nguess++;
    } while (guess!=number);
    

    return 0;
}