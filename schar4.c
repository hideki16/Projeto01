#include <stdio.h>
#define MAX 100

char hexadecimal(int y){
	char h[16]= {'0','1', '2','3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	char i;

	i=h[y];
	return i;
}
    
int main(){
	int a[MAX], i, x, y;
	char s[MAX], n, m;


	printf("Escreva algo:");
	fgets(s, MAX, stdin);
	
	for(i = 0; s[i] != '\n' && s[i] != '\0'; i++){
		a[i]=s[i];
		x=(a[i])/16;
		y=(a[i])%16;
	    
	    n=hexadecimal(x);
	    m=hexadecimal(y);
		
		printf("%c%c", n, m);

	}
	printf("\n");
	return 0;
}