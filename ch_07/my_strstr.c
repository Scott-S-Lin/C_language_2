#include<stdio.h>
#include<string.h>

char *my_strstr(char *target_str, char *token){
	int i=0, j = 0;
	
	int token_num = strlen(token);
	
	for (i =0; target_str[i] !=0 ; i++){
		 int match_number = 0;
		 for (j = 0; j< token_num; j++){
	         
		 	 if(target_str[i+j] == token[j]){
		 	 	match_number++;
		 	 	if( match_number == token_num )
		          return &(target_str[i]);
			  }
			 else 
			 	
		        
				  break;  
			 
			    
		 }
		 
	};
	   
  	 
	return 0;
}



int main(){
	char my_string[] = "1234567890";
	char token[] = "456";
	
	printf("postion = %s",my_strstr(my_string, token));
}
