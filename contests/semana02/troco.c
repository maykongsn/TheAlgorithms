#include <stdio.h>

int main() {
  float valor, notas[] = { 100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05 };

  scanf("%f", &valor);

  for(int i = 0; i < 11; i++) {
    int a = 0;
    while(valor >= notas[i]) {
      valor -= notas[i];
      a++;
    }
    if(a > 0) printf("%d de %.2f\n", a, notas[i]);
  }

  if(valor>0.009) printf("Falta %.2f\n", valor);

  return 0;
}