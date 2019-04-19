#include<stdio.h>
#include<time.h>
   int get_card(){
   	
   	
  
   	
   }
	   

int main(){
	int i, j, k =0;
	char card_number[13] = {'A', '2','3', '4', '5','6',\
	                 '7', '8','9', '10','J', 'Q', 'K'};
    char card_style[4] = {'H','S','D','C'}; // heart, Spade, diamond,club

	srand(time(0));
	
	 printf("%c%c",card_style[rand() % 4],card_number[rand() % 13]);
	
	
	

	return 0;

}
