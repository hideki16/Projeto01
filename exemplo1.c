#include <stdio.h>

int main() {
  int total, n, i;
  FILE *f;

  f = fopen("exemplo1.txt", "r");

  if(f == NULL) {
    printf("Erro durante abertura do arquivo\n");
    return 0;
  }

  fscanf(f, "%d", &total);

  for(i = 0; i < total; i++) {
    fscanf(f, "%d", &n);

    printf("%d\n", n);
  }

  fclose(f);

  return 0;
}
