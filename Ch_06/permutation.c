#include<stdio.h>


int main(){
	int i, j, k =0;
	char alpha[3] = {'A', 'B', 'C'};


	
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
				 for(k=0; k<3; k++)
				  printf("%d = %c%c%c\n ", 9*i+3*j+k+1, alpha[i],alpha[j],alpha[k]);	
				 	
				 	
			
	   
	

}
