// encryption.
#include <stdio.h>

void encryption (char *st)
{
    char *ptr = st;
    while ((*ptr)!= '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
void decryption (char *st)
{
    char *ptr = st;
    while ((*ptr)!= '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    
}

int main() {
    char msg[] = "attack on titan";
    printf ("the msg before encryption is %s\n",msg);
    encryption(msg);
    printf ("the encrypted msg is this %s\n",msg);
    decryption(msg);
    printf ("the msg after decryption is %s",msg);
    return 0;
}