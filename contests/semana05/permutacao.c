#include <stdio.h>

int contaDigitos(int n) {
  int contaDigitos = 0;
  while(n != 0) {
    contaDigitos++;
    n /= 10;
  }
  return contaDigitos;
}

int main() {
  int n1, n2, aux = 0, cont = 0, aux1, aux2;
  scanf("%d %d", &n1, &n2);

  int qtdDigitosN1 = contaDigitos(n1);
  int qtdDigitosN2 = contaDigitos(n2);

  if(qtdDigitosN1 == qtdDigitosN2) {
    int v1[qtdDigitosN1];
    int v2[qtdDigitosN2];
    int res = 0;
    for(int i = 0; i < qtdDigitosN1; i++) {
      res = n1 % 10;
      n1 /= 10;
      v1[i] = res;
      
      res = n2 % 10;
      n2 /= 10;
      v2[i] = res;
    }

    for(int i = 0; i < qtdDigitosN1; i++) {
      for(int j = 0; j < qtdDigitosN2; j++) {
        if(v1[i] > v1[j]) {
          aux = v1[i];
          v1[i] = v1[j];
          v1[j] = aux;
        }
        if(v2[i] > v2[j]) {
          aux = v2[i];
          v2[i] = v2[j];
          v2[j] = aux;
        }
      }
    }
    
    for(int i = 0; i < qtdDigitosN1; i++) {
      if(v1[i] == v2[i]) {
        cont++;
      }
    }

    if(cont == qtdDigitosN1) {
      printf("True\n");
    } else {
      printf("False\n");
    }
  } else {
    printf("False\n");
  }

  return 0;
}