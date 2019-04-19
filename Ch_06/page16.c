#include <stdio.h>

int main()
{
    int array[3]={5,-2,7};
    int *p=array;
    
    printf( "\n %p, %p, %p \n", &array, array, &array[0] );
    
    printf( "\n %p, %p \n", p, &p );
    
    //------------------------------
    
    /*char arr[] = "hello";
    char *ptr = "hello";
    
    printf("\n%s\n", arr);
    printf("\n%s\n", ptr);*/


    return 0;
}
