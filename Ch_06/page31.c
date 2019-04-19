#include <stdio.h>

int main()
{
    int * p1;
    const int * p2;
    
    p1 = p2; // not valid -- assigning const to non-const
    p2 = p1; // valid -- assigning non-const to const
    
    return 0;
}
