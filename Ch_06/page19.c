#include <stdio.h>

#define SIZE 3
void show_1d(int *start, int *end);

int main()
{
    int i=0;
    int a[3]={5,-2,17};

    show_1d(a, a+SIZE);
    printf("\n");
    
    a[1]=100;
    show_1d(&a[0],a+3);

    return 0;
}

void show_1d(int *start, int *end)
{
    int i = 0 ;

    for ( ; start<end; start++, i++)
        printf("start[%d]=%-5d <-- %p\n", i, *start, start);
}
