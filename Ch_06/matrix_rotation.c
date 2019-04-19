#include<stdio.h>
#include<stdlib.h>
 
   	
int main(){
   const int matrix_num = 4;   
   int i, j =0;
   int k, f =0;
   
   int original[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   int clock90[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   int anti_clock90[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   int mirror_right[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   
   // clock 90 degree
   for(i = 0; i< matrix_num; i++)
       for(j = 0; j< matrix_num; j++){
       	
       	switch(i){
		  case 0: 
	         clock90[j][matrix_num-1] = original[i][j];
	         break;
	      case 1: 
	         clock90[j][matrix_num-2] = original[i][j];
	         break;
	      case 2: 
	         clock90[j][matrix_num-3] = original[i][j];
	         break;
		  case 3: 
	         clock90[j][0] = original[i][j];
	         break;       
	 }
   }   
   for(i = 0; i< matrix_num; i++)
       for(j = 0; j< matrix_num; j++){
      printf("\nclock90[%d][%d] = %d ",i, j, clock90[i][j]);     	
 }
 
}
