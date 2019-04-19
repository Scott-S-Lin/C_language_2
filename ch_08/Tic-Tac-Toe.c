#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char ChessStatus[3] = {"O", "X", " "};

displayOnScreen( char *matrix){
	int j = 0;
	  
   	for (j = 0; j<40;j++) {
	   	   
	   	system("cls");
	   	printf("\n\n\n\n\n\n\n\n\n\n");
		
		printf(matrix); 
		
		printf("\n\n\n\n\n\n\n\n\n\n");  
    }
	
}

int main(){
   char str[100];
   char y_position, x_position;
   int player; // 1,-1
   
   int  ChessStatus f[3][3];  // 1(player A) -1(Palyer B), 0 (empty), 
     	
   scanf("Player %c%c select position (like 1A; 0 to exit.): ", y_position,x_position);
  
  // assign value
   for (i = 0; i<3; i++){
   	   if (x_position =='A') 
   	
   }
     
  
   displayOnScreen( "this is a test");

   return 0;

}

