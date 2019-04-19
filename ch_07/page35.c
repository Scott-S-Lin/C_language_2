#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
	char str[SIZE];
	int i;
	
	//scanf("%s", str);
	//gets(str);
	fgets(str, SIZE, stdin);
	
	for(i=strlen(str)-1; i>=0; i--)
		printf("%c", str[i]);

	return 0;
}

