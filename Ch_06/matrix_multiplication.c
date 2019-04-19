#include<stdio.h>
#include<stdlib.h>
   const int row_1 = 4; 
   const int col_1 =5;
   const int row_2 = 5;  
   const int col_2=3;
   const int final_row = 4;
   const int final_col = 3; 
   const int common_multiple = 5;
   	


int main(){
   

   int i, j =0;
   int k, f =0;
   
   int first[4][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
   int second[5][3]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
   int final[4][3]={0,0,0,0,0,0,0,0,0,0,0,0}; 
  /* 
   // first matrix
    printf("first matrix: \n");
    for (i= 0; i<row_1 ; i++ )
   	  for (j = 0; j<col_1 ; j++ )
   	  	   printf("%d ", first[i][j]);
   	  	   
   // second matrix	
   printf("\nsecond matrix: \n");  	   
    for (i= 0; i<row_2 ; i++ )
   	  for (j = 0; j<col_2 ; j++ )
   	  	   printf("%d ", second[i][j]);
   	  	   
   */	  	   
   	  	   
 // final matrix	
printf("\nfinal matrix: \n"); 
   
   for(k=0; k < final_row; k++)
      for(f=0; f < final_col; f++){
      	
      	for (i = 0; i<common_multiple; i++ ){
 		  final[k][f] = final[k][f] + first[k][i] * second[i][f];
	      printf("\nfirst[%d][%d] = %d \n",k, i, first[k][i]);
		  printf("second[%d][%d] = %d \n",i, f, second[i][f]);
		  printf("sub final[%d][%d] = %d \n",k, f, final[k][f]);	  
      	  
     	  
      }
      	printf("\nfinal[%d][%d] = %d \n",k, f, final[k][f]);
	  }
   
   
   
  printf("\nfinal matrix: \n"); 
   for (i= 0; i<final_row ; i++ )
   	  for (j = 0; j<final_col ; j++ )
   	  	   printf("%d ", final[i][j]);
   	  	   
   	  	   
	   
   	  	   
   	  	   
		   	
   
		
	
	
	
	
}
