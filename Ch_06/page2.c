#include <stdio.h>

int main()
{
    int a[3]; //={5,-2,17};
    int b[5] = {5,-2};
    int i;

    a[0] = 5;
    a[1] = -2;
    a[2] = 17;
    printf("%d, %d, %d \n", a[0], a[1], a[2]);

    for(i=0; i<5; i++)
        printf("%d, ", b[i]);
    printf("\n");

    return 0;
}
