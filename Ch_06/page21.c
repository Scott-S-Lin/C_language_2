#include <stdio.h>

int main()
{
    char arrayChar[10], *ptrChar;
    int arrayInt[10], *ptrInt;
    
    ptrChar = arrayChar;
    printf("\n %p \n", ptrChar);
    
    ptrChar++;
    printf("\n %p \n", ptrChar);

    ptrInt = arrayInt;
    printf("\n %p \n", ptrInt);
    
    ptrInt++;
    printf("\n %p \n", ptrInt);

    return 0;
}
