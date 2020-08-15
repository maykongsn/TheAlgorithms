#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
  bool ehPrimo = false;
  int cont; 
  
  for(int i = 1; i <= n; i++) {
    if(n%i == 0) {
      cont++;
    }

    if(cont == 2) {
      ehPrimo = true;
    }
  }
  return ehPrimo;
}

int main() {
  int n;
  printf("Forneça um número inteiro: ");
  scanf("%d", &n);

  printf("%d", ehPrimo(n));
  
  return 0;
}
