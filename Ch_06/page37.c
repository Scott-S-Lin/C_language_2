#include <stdio.h>
#define ROW 3
#define COL 2
int main()
{
    int i,j;
    int m[ROW][COL]={{100,200},
                     {300,400},
                     {500,600}};

    printf("\n %p \n", m);
    
    printf("\n %p \n", m+2);
    
    printf("\n %p \n", *(m+2));
    
    printf("\n %p \n", *(m+2)+1);
    
    printf("\n %d \n", *(*(m+2)+1));

    return 0;
}
