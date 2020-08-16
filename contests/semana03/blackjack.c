#include <stdio.h>

int main() {
  int n, soma = 0, cont = 0;

  scanf("%d", &n);
  int mao[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &mao[i]);
  }

  for(int i = 0; i < n; i++) {
    if(mao[i] > 10) {
      mao[i] = 10;
    } else if(mao[i] == 1) {
      mao[i] = 11;
      cont++;
    }
    soma += mao[i];
  }   

  if(soma > 21 && cont > 0) {
    for(int i = 0; i < n; i++) {
      if(soma > 21) {
        soma -= 10;
      }
    }
  }

  printf("%d\n", soma);

  return 0;
}