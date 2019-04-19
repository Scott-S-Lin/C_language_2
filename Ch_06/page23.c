#include <stdio.h>
#include <stdlib.h> //malloc()

int main()
{
    int *ptr=(int *)malloc(sizeof(int)*10);
    
    *ptr=100;
    *(ptr+1)=200;
    ptr[2]=300;
    
    printf("\n %d, %d, %d \n", ptr[0], ptr[1], ptr[2] );
    
    free(ptr);

    return 0;
}
