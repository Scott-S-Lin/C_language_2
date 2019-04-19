#include <stdio.h>

int main()
{
    int arr[3]={5,-2,7};
    int *p=arr;
    int i;
    
    printf( "\n %p, %p \n", &arr[0], arr );
    
    i = 2;
    printf( "\n %d, %d, %d \n", *(p+i), arr[i], *(arr+i) );
    
    printf( "\n %p, %d \n", arr, sizeof(arr) );
    printf( "\n %p, %d \n",   p, sizeof(p) );

    return 0;
}
