#include <stdio.h>
#include <string.h>

int main()
{
    int q[3];
    //int q[3] = {1, 2, 3};
    //int q[] = {1, 2, 3};

    //printf("%d, %d \n", sizeof(int), sizeof(q));

  //-------------------------------------------

    char str1[10] = {'a', 'b', 'c', '\0'};
    char str2[10] = "abc";

    printf("%d, %d, %s \n", sizeof(str1), strlen(str1), str1);
    printf("%d, %d, %s \n", sizeof(str2), strlen(str2), str2);


    return 0;
}
