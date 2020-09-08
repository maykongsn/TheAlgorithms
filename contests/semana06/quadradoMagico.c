#include <stdio.h>
#define tam 3

int main() {
  int m[tam][tam], somaLinhas[] = {0, 0, 0}, somaColunas[] = {0, 0, 0}, somaPrincipal = 0, somaSecundaria = 0;
  int ehMagico = 1;
  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < tam; j++) {
      scanf("%d", &m[i][j]);
    }
  }

  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < tam; j++) {
      somaLinhas[i] += m[i][j];
      somaColunas[j] += m[j][i];
    }
  }

  for(int i = 0; i < tam; i++) {
    somaPrincipal += m[i][i];
  }

  for(int i = 0; i < tam; i++) {
    somaSecundaria += m[i][tam-i-1];
  }

  for(int i = 1; i < tam; i++) {
    if(somaLinhas[i] != somaLinhas[i-1]) {
      ehMagico = 0;
      break;
    } else if(somaColunas[i] != somaColunas[i-1]) {
      ehMagico = 0;
      break;
    }
  }

  if(ehMagico && somaPrincipal == somaSecundaria) {
    printf("sim\n");
  } else {
    printf("nao\n");
  }

  return 0;
}