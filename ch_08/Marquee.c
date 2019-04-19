
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   char str[100];
   	
   //scanf("type the word for Marquee %s", str);
  
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf ( "Current local time and date: %s", asctime (timeinfo) );
  
  
  
  
  
   
   int i = 0, j =0;
   while (1){
   	for (j = 0; j<40;j++) {
	   	   
	   	system("cls");
	   	printf("\n\n\n\n\n\n\n\n\n\n");
		for (i = 0; i<j ; i++)
		   printf("  ");
		   
		   
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf ( "%s", asctime (timeinfo) );		   
		   
		
		sleep(1);
     }
   }   



   return 0;

}

