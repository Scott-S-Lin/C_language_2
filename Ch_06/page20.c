#include <stdio.h>

int main()
{
    //int *pt;        // an uninitialized pointer
    int *pt=NULL;   // set to NULL
    
    *pt = 4;  // a terrible error

    return 0;
}
