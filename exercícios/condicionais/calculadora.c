#include <stdio.h>

int main() {
  float n1, n2;
  char operador;

  printf("Digite: <numero operador numero>\n");
  scanf("%f %c %f", &n1, &operador, &n2);

  switch(operador) {
    case '+':
      printf("Resultado: %.2f\n", n1+n2);
    break;
    case '*':
      printf("Resultado: %.2f\n", n1*n2);
    break;
    case '-':
      printf("Resultado: %.2f\n", n1-n2);
    break;
    case '/':
      printf("Resultado: %.2f\n", n1/n2);
    break;
    default:
      printf("Operador invalido\n");
  }
  
  return 0;
}