#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
   int price[20];
   
   int i=0,j=0, max_under30000=0, sum=0;
   
   srand(time(0));
   for(i = 0; i<20;i++) {
   	// rand range less than 30000 2¦h 
   	printf("price = %d\n",price[i]=rand());
   	
   } 	  
	for(i = 0; i<20;i++) {
		for(j = i+1; j<20;j++){
			
			sum = price[i] + price[j];
			if(sum <30000 && max_under30000 < sum ){
				max_under30000 = sum;
			}
			   
			   
		}
   
   	
   } 	  
	 
   	printf("the most close number is :%d",max_under30000);

}

