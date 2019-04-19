#include <stdio.h>

float D2A(int Digital_value);

int main()
{
    int i;
    
    for(i=0; i<1024; i+=10)
        printf("%d = %fv \n", i, D2A(i));
    
    return 0;
}

float D2A(int value)
{
    return 3.3*value/1023;
}
