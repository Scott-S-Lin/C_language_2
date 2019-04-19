#include <stdio.h>

extern int k;
extern int func1(void);

static int x=5;

int main(int argc, char** argv)
{
    printf("Hello world!\n");
    
    printf("x = %d \n", x);
    
    printf("%d \n", func1());
	
	return 0;
}

