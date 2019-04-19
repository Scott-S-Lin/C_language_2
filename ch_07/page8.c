#include <stdio.h>

int main()
{
    char string[]="Welcome";
    int i=0;

    while (string[i]!='\0'){
        putchar(string[i]);
        i++;
    }

    return 0;
}
