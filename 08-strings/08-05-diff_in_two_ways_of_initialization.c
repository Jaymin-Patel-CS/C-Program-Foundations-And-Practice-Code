#include <stdio.h>

int main() {
    //char s[] = "jaymin patel";  // in this type of initialization we can't change the content later by reinitializing.
    char *s = "jaymin patel";  // in this we can reinitialize by exrernal change.
    s = "jjj ppp";
    puts (s);
    return 0;
}