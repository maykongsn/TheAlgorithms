#include <stdio.h>

int main() {
  int n, soma = 0, maior = 0, posicao = 0;
  scanf("%d", &n);

  int m[n][n];
  int v[n];

  for(int i = 0; i < n; i++) {
    v[i] = 0;
    for(int j = 0; j < n; j++) {
      scanf("%d", &m[i][j]); 
    }
  }

  for(int j = 0; j < n; j++) {
    for(int i = 0; i < n; i++) {
      soma += m[i][j]*m[i][j]; 
    }
    if(soma > maior) {
      maior = soma;
      posicao = j;
    }
    soma = 0;
  }

  printf("%d\n", posicao);
  return 0;
}