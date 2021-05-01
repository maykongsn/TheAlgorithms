#include <stdio.h>

int agrupar(int v[]) {
  int temp = 0;
  int limite = 100;
  for(int i = 0; i < 3; i++) {
    temp += v[i]*limite;
    limite /= 10;
  }
  return temp;
}

int main() {
  int n, contaDigitos = 0, pos = 0, res = 0, cont = 0, ehPrimo, ehEspecial = 1;
  scanf("%d", &n);
  
  int aux = n;
  while(aux!=0) {
    contaDigitos++;
    aux /= 10;
  }

  int v[contaDigitos];
  aux = n;
  cont = contaDigitos;
  while(aux!=0) {
    res = aux % 10;
    v[cont-1] = res;
    cont--;
    aux /= 10;
  }


  for(int i = 0, j = 2; i < contaDigitos-2; j++, i++) {
    aux = v[i] * 100 + v[i+1] * 10 + v[i+2] * 1;
    ehPrimo = 1;
    for(int k = 2; k < j; k++) {
      if(j%k==0) {
        ehPrimo = 0;
      }
    }
    if(ehPrimo) {
      printf("%d\t%d\n", aux, j);
      if(aux%j!=0) {
        ehEspecial = 0;
      }
    }
  }

  if(contaDigitos < 3) {
    ehEspecial = 0;
  }
  if(ehEspecial) {
    printf("sim\n");
  } else {
    printf("nao\n");
  }
  // for(int i = pos, k = 0; i < contaDigitos; i++, k++) {
  // }
  return 0;
}