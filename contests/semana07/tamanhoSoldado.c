#include <stdio.h>

double media(double vet[], int qtd) {
  double soma = 0;
  for(int i = 0; i < qtd; i++) {
    soma += vet[i];
  }
  return soma/qtd;
}

int main() {
  int qtd;
  scanf("%d", &qtd);
  
  double vet[qtd];

  for(int i = 0; i < qtd; i++) {
    scanf("%lf", &vet[i]);
  }

  if(qtd != 1) {
    printf("%.2lf\n", media(vet, qtd));
  }

  for(int i = 0; i < qtd; i++) {
    if(vet[i] < media(vet, qtd)) {
      if(i==0) {
        printf("P");
      } else {
        printf(" P"); 
      }
    } else if(vet[i] == media(vet, qtd)) {
      if(i==0) {
        printf("M");
      } else {
        printf(" M"); 
      }
    } else {
      if(i==0) {
        printf("G");
      } else {
        printf(" G"); 
      }
    }
  }
  printf("\n");
  return 0;
}