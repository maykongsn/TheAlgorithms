#include <stdio.h>

char negrito = 1<<0;
char italico = 1<<1;
char sublinhado = 1<<2;
char tachado = 1<<3;
char sobescrito = 1<<4;
char subscrito = 1<<5;

char *propriedades[6] = {"negrito", "italico", "sublinhado", "tachado", "sobescrito", "subscrito"};

void imprimirPropriedades(char c) {
  if(c==0) {
    printf("Caractere não possui propriedades\n");
  } else {
    printf("Propriedades do caractere: :");
    for(int i = 0; i < 6; i++) {
      if(c%2 == 1) {
        printf("| %s |", propriedades[i]);
      }
      c >>= 1;
      printf("\n");
    }
  }
}

int main() {
  imprimirPropriedades(2);
  return 0;
}