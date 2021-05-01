#include <stdio.h>

int contarLinhas(FILE* arquivo) {
  int numLinhas = 1;
  char c = fgetc(arquivo);
  while(c != EOF) {
    if(c == '\n')
      numLinhas++;
    c = fgetc(arquivo);
  }
  return numLinhas;
}

int contarLinhasS(FILE* arquivo) {
  int numLinhas = 0;
  char linha[100];

  while(fgets(linha, sizeof(linha), arquivo) != NULL) {
    numLinhas++;
  }
  rewind(arquivo);
  return numLinhas;
}

int main() {
  FILE* arquivo = fopen("sherlock_holmes.txt", "r");

  printf("Total de linhas(1): %d\n", contarLinhas(arquivo));
  printf("Total de linhas(2): %d\n", contarLinhasS(arquivo));
  fclose(arquivo);
  return 0;
}