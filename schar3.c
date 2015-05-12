#include <stdio.h>
#define MAX 100

int main(){
	int i[MAX], a, x, y;
	char s[MAX];
	printf("Escreva algo:");
	fgets(s, MAX, stdin);
	for(a = 0; s[a] != '\n' && s[a] != '\0'; a++){
		i[a]=s[a];
		x=(i[a])/16;
		y=(i[a])%16;
		printf("%d%d", x, y);

	}
		
  printf("\n");
	return 0;
}