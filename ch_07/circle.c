#include <stdio.h>
#include <string.h>


int main()
{
	int x, y =0;
	
    for (y = 0; y<24; y++ ){
    	
    	for (x = 0; x<80; x++){
    		
    		if ( (x-39)*(x-39) + (y-11)*(y-11) <=  64 )
    		  printf("X");
    		else
			  printf(" ");  
    		  
		}
	}
 
 
   return(0);
}
