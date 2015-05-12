#include <stdio.h>

int main() {
  FILE *f;

  f = fopen("exemplo3.txt", "w");

  if(f == NULL) {
    printf("Erro durante abertura do arquivo\n");
    return 0;
  }

  fprintf(f, "Hello World!\n");

  fprintf(f, "Hello World! Eis um inteiro: %d\n", 100);

  fprintf(f, "Hello World! Eis um real: %f\n", 0.5);

  fclose(f);

  return 0;
}
