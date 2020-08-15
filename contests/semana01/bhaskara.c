#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c;
  scanf("%f\n%f\n%f", &a, &b, &c);

  float delta = (b * b) - 4 * a * c;

  float raizPositiva = (-b + sqrt(delta)) / (2 * a); 
  float raizNegativa = (-b - sqrt(delta)) / (2 * a);

  if(delta > 0) {
    printf("%.2f\n%.2f\n", raizPositiva, raizNegativa);
  } else if (delta == 0) {
    printf("%.2f\n", raizPositiva);
  } else {
    printf("nao ha raiz real\n");
  }

  return 0;
}
