#include <stdio.h>
#define SIZE 3

int main()
{
    int i=0; int sum=0;
    int a[SIZE]={5,-2,17};
    a[1]=100;

    for(i=0; i<SIZE; i++)  {
        printf("a[%d]=%d\n",i,a[i]);
        sum += a[i];
    }

    printf("sum = %d \n", sum);

    return 0;
}
