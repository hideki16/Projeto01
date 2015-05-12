#include <stdio.h>

#define MAX 100

void gets2(char s[], int max){
  int i;
  fgets(s, max, stdin);
  for(i=0; s[i] != '\0' && s[i] != '\n'; i++)
    ;
      s[i] = '\0';

  return;  
}

int main() {
  int i;
  char linha[MAX],entrada[MAX];
  FILE *f;
  printf("Digite o nome do arquivo:");
  gets2(entrada, MAX);

  f = fopen(entrada, "r");

  if(f == NULL) {
    printf("Erro durante abertura do arquivo\n");
    return 0;
  }

  
  fgets(linha, MAX, f);
  printf("%s\n", linha);
  
  fclose(f);

  return 0;
}
