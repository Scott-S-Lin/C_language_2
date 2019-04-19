#include <stdio.h>
#define ROW 3
#define COL 2
int main()
{
    float (*pz)[2]; // pz points to an array of 2 float
    float m[3][2];
    int i, j;

    pz=m;
    i=2, j=1;
    pz[i][j] = 123.456;
    printf("\n %f \n", pz[i][j] );
    printf("\n %f \n", *(*(pz + i) + j) );


    /*float (*ptr_2d)[3][2];
    ptr_2d = &m;
    printf("\n %f \n", (*ptr_2d)[2][1] );
    printf("\n %f \n", ptr_2d[0][2][1] );*/

    return 0;
}
