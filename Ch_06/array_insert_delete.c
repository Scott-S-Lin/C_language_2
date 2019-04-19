#include<stdio.h>

int main() {

const int n =10;
int i; 
int array[n] ;

        // before:
        printf("before array is\n");
		for(i=0; i<n; i++){
				array[i] = (rand() % 100) +1;
				printf("%d random = %d\n",i+1, array[i]);
			}
			
		// insert number 5, position 7
        array_insert(array, n, 5, 7);
		
		
		 for(i=0; i<n; i++){
				
				printf("array[%d] = %d\n",i+1, array[i]);
			}			
			
		// delete position 8
        array_delete(array, n, 8);		
			
		
        for(i=0; i<n; i++){
				
				printf("array[%d] = %d\n",i+1, array[i]);
			}		
}

array_insert(int a[], int size, int number, int position){
          int i =0;
          
         for (i = size-1;i> position-1; i--)
            a[i] = a[i-1];
       a[position-1] = number; 
	      
     printf("\nafter insert array is\n");
     
     
     
}
array_delete(int a[], int size, int position){
      int i =0;
      
      for (i = position-1;i<size; i++)
            a[i] = a[i+1];
       a[size-1] = 0;   
	   printf("\nafter delete array is\n");  
}

	

