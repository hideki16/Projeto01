#include <stdio.h>

int main(){
	int a;
	while(1){
	printf("Digite algo:");
	scanf("%d", &a);
	printf("%d divido por 2 :%d\n",a, a/2);
	printf("O resto é %d\n", a%2);
		
	}
	return 0;
}