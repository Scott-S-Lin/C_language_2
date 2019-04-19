#include <stdio.h>

void sum_rows(int (*ar)[4], int rows);

int main()
{
    int junk[3][4] =  {	{2,4,5,8} ,
			            {3,5,6,9} ,
			            {12,10,8,6}
		              };

	sum_rows(junk, 3);

    return 0;
}

void sum_rows(int (*ar)[4], int rows)
//void sum_rows(int ar[][4], int rows)
{
    int r;
    int c;
    int tot;

    for (r = 0; r < rows; r++)
    {
        tot = 0;
        for (c = 0; c <4; c++)
            tot += ar[r][c];
        printf("row %d: sum = %d\n", r, tot);
    }
}
