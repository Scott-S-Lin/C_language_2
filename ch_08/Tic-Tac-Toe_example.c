#include <stdio.h> 
#include <stdlib.h> 
int a[3][3]; 
void show_position(void); 
int check(void); 
int main() 
{ 
int i, j, player, pp, done; 
char buf[3]; 
for (i=0; i< 3; i++) 
for (j=0; j<3; j++) 
a[i][j] = 0; 
pp = 0; 
done = 0; 
player = 0; 
do 
{ 
show_position(); 
printf("Player %d select a position (like 1A; 0 to exit.): ", player); 
scanf("%s", &buf); 
if (buf[0] == '0') break; 
i = buf[0] - '1'; 
j = buf[1] - 'A'; 
if ((i < 0) || (2 < i) || (j < 0) || (2 < j)) continue; 
if (a[i][j] > 0) continue; 
a[i][j] = player+1; 
player = 1 - player; 
done = check(); 
pp++; 
} while ((done == 0) && (pp < 9)); 
printf("\n"); 
show_position(); 
player = 1 - player; 
if (done > 0) 
printf("Player %d WON!\n", player+1); 
else 
printf("It is TIE!\n"); 
return; 
} 
void show_position() 
{ 
int i, j; 
printf(" A B C\n"); 
for (i=0; i< 3; i++) 
{ 
printf("%d ", i+1); 
for (j=0; j<3; j++) 
if (a[i][j] == 1) 
printf("O "); 
else if (a[i][j] == 2) 
printf("X "); 
else 
printf("_ "); 
printf("\n"); 
} 
} 
int check() 
{ 
int i, j; 
for (i=0; i< 3; i++) 
if ((a[i][0] == a[i][1]) && (a[i][0] == a[i][2])) 
if (a[i][0] > 0) return a[i][0]; 
for (j=0; j< 3; j++) 
if ((a[0][j] == a[1][j]) && (a[0][j] == a[2][j])) 
if (a[0][j] > 0) return a[0][j]; 
if ((a[0][0] == a[1][1]) && (a[0][0] == a[2][2])) 
if (a[0][0] > 0) return a[0][0]; 
if ((a[0][2] == a[1][1]) && (a[0][2] == a[2][0])) 
if (a[0][2] > 0) return a[0][2]; 
return(0); 
} 
