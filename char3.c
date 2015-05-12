#include <stdio.h>
#define MAX 100

int main(){
	char  n, i, x, y;
	char s[MAX],a[MAX];
    
	printf("Escreva algo:");
	fgets(a, MAX, stdin);

	for(i = 0; a[i] != '\n' && a[i] != '\0'; i++){
		if(a[i]=='0')
			n=0;
		if(a[i]=='1')
			n=1;
		if(a[i]=='2')
			n=2;
		if(a[i]=='3')
			n=3;
		if(a[i]=='4')
			n=4;
		if(a[i]=='5')
			n=5;
		if(a[i]=='6')
			n=6;
		if(a[i]=='7')
			n=7;
		if(a[i]=='8')
			n=8;
		if(a[i]=='9')
			n=0;
		if(a[i]=='A')
			n=10;
		if(a[i]=='B')
			n=11;
		if(a[i]=='C')
			n=12;
		if(a[i]=='D')
			n=13;
		if(a[i]=='E')
			n=14;
		if(a[i]=='F')
			n=15;
		if(i%2==0){
            x=n*16;
			printf("%d", x);
		}
			
		else{
			y=n;
			printf("%d", y);
		}
			
	
    
    }
    printf("\n");
    return 0;

}