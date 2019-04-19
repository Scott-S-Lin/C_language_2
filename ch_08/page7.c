#include <stdio.h>

int up[100];
extern char Coal;     /* mandatory declaration          */
                                /* Coal defined in another file   */
extern int out[];      /* externally reference array       */
int k=5;                    /* defined global variable    */
int next(int k);

int main(void)
{
  extern int k;                /* optional declaration           */

  extern int up[];      /* optional declaration           */

  printf("%d\n", k);
  
  return 0;
}

int next(int k )
{
  return k;
}
