#include <stdio.h>

int main()
{
    char string1[]={'W','e','l','c','o','m','e'};
    char string2[]="Welcome";
    char string3[]={'W','e','l','c','o','m','e','\0'};
    
    printf("\n %d, %d, %d \n",
            sizeof(string1),
            sizeof(string2),
            sizeof(string3));

    return 0;
}
