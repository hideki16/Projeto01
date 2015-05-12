#include <stdio.h>
#define MAX 100

int main(){
	int i[MAX],a;
	char s[MAX];
	printf("Escreva algo:");
	fgets(s, MAX, stdin);
	for(a = 0; s[a] != '\n' && s[a] != '\0'; a++){
		i[a]=s[a];
		printf("%d", i[a]);
	}
		
  printf("\n");
	return 0;
}