#include <stdio.h>

int main() {
  int n, soma, maior = 0;
  scanf("%d", &n);

  int t[n][n], l[n], c[n];
  
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      scanf("%d", &t[i][j]);
    }
  }

  for(int i = 0; i < n; i++) {
    l[i] = 0;
    c[i] = 0;
    for(int j = 0; j < n; j++) {
      l[i] += t[i][j];
      c[i] += t[j][i];
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      soma = l[i]+c[j]-2*t[i][j];
      if(soma > maior) {
        maior = soma;
      }       
    }
  }

  printf("%d\n", maior);
  return 0;
}