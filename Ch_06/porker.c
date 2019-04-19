#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	   

int main(){
	int i=0;
	int j=0;
	char card_number[13] = {'A','2','3','4', '5','6','7', '8','9', '10','J', 'Q', 'K'};
    char card_style[4] = {'S','H','D','C'}; // heart, Spade, diamond,club

	srand(time(0));
	  
	  
	 i =  ((rand() % 100) +1)%4;
	 srand(time(0));
	 
	 j =((rand() % 100) +1) % 13;
	 printf("stype = %d, number = %d", i, j);
	 printf("\n%c%c",card_style[i],card_number[j]);
	
	
	

   return 0;

}
