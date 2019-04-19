#include<stdio.h>
#include<stdlib.h>
 
   	
int main(){
   const int matrix_num = 4;   
   int i, j =0;
   int k, f =0;
   
   int original[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
 
   int mirror_rf[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   
   // clock 90 degree
   for(i = 0; i< matrix_num; i++)
       for(j = 0; j< matrix_num; j++){
       	
       	switch(i){
		  case 0: 
	         mirror_rf[i][matrix_num-j-1] = original[i][j];
	         break;
	      case 1: 
	         mirror_rf[i][matrix_num-j-1] = original[i][j];
	         break;
	      case 2: 
	         mirror_rf[i][matrix_num-j-1] = original[i][j];
	         break;
		  case 3: 
	         mirror_rf[i][matrix_num-j-1] = original[i][j];
	         break;       
	 }
   }   
   for(i = 0; i< matrix_num; i++)
       for(j = 0; j< matrix_num; j++){
      printf("\nmirror_rf[%d][%d] = %d ",i, j, mirror_rf[i][j]);     	
 }
 
}
