#include <stdio.h>

int main()
{
    char names1[3][6] = { "abcde", "fghij", "klm"};
    char names2[3][6] = {{'a', 'b', 'c', 'd', 'e', '\0'},
                         {'f', 'g', 'h', 'i',  'j', '\0'},
                         {'k', 'l', 'm', '\0'} };

    printf("\n %d, %d \n",
            sizeof(names1), sizeof(names2));

    return 0;
}
