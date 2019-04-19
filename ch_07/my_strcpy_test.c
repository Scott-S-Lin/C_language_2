#include<stdio.h>

void my_strcpy(char *to, char *from){
	int i = 0;
	
	for (i =0; to[i] = from [i] ;i++);
	   
  	 printf("test");
	
}



int main(){
	char A[] = "123456";
	char B[100];
	my_strcpy(B, A);
	printf("B = %s",B);
}
