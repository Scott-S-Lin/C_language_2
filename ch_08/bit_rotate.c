#include<stdio.h>

int rotate_left(int value, int nbit){
	int i=0;
	int p[16;]
	int tmp = value;
	
	for (i = 0; i<mbit; i++){
	
	   p[0] = (tmp&0x8000)>>15;
       tmp= tmp <<1;     
    }
    value = value << nbit;
    
    
}

int rotate_right(int value, int nbit){
	
	
}

int main(){
	
	int n;
	scanf("%d",&n);
	rotate_left (n, 5);
	
	

	
}
