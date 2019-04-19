#include <stdio.h>
#include <string.h>

int main()
{
    char *ptr="hello";
    char  str[]="hello";
   
    printf( "\n %d, %d \n", sizeof(ptr), sizeof(str) );
   
    //ptr[2]='T';
    str[2]='T';
    
    printf( "\n %s, %s \n", ptr, str );

    return 0;
}
