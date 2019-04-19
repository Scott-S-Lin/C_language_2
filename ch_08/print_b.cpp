#include<stdio.h>

int main(){
	
	short n, i =0;
//	printf("test %d", 0x8000 );
	scanf("%i",&n);


   for(i = 0 ; i< 16; i++){
   	
   	printf("%i", (n&0x8000)>>15);
    n= n <<1;    	
   }
	
    
	
}
