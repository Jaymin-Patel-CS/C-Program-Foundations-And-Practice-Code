#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissor(char comp,char you)
{
    if (comp == you)
    {
        return 0;
    }
    
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    if (you == 's' && comp == 'r')
    {
        return -1;
    }
    if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    if (you == 'p' && comp == 's')
    {
        return -1;
    }
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    

}

int main() {
    int num;
    char comp, you;

    srand (time(0));
    num = (rand()%3) + 1 ;
    
    if (num == 1)
    {
        comp = 'r';
    }else if (num == 2)
    {
        comp = 'p';
    }else if (num == 3)
    {
        comp = 's';
    }
    
    printf ("Computer have selected its , now you select your one.\n");
    
    printf ("For ROCK type 'r' , for PAPER type 'p' and for SCISSOR type 's'\n");
    scanf ("%c",&you);
    int result = rockpaperscissor(comp , you);
    printf ("You have selected '%c' and Computer have selected '%c'\n",you , comp);
    if (result == 1)
    {
        printf ("You won.\n");
    }else if (result == -1)
    {
        printf ("You lose.\n");
    }else if (result == 0)
    {
        printf ("You and computer draw.Try again.\n");
    }
    
    return 0;
}