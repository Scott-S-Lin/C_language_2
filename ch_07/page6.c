#include <stdio.h>

int main()
{
    char names1[3][6] = { "abcde", "fghij", "klm"};
    char *names2[3] = { "abcde", "fghij", "klm"};

    printf("\n %d, %d \n",
            sizeof(names1), sizeof(names2));

    printf("\n %s %s \n", names1[1], names2[1]);
    
    printf("\n %c %c \n", names1[1][0], names2[1][2]);
    
    names1[1][0] = 'z';
    //names2[1][2] = 'z';
    
    printf("\n %c %c \n", names1[1][0], names2[1][2]);
    
    return 0;
}
