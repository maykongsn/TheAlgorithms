#include <stdio.h>

float fahrenheit(int temperatura);

int main() {
  int temperaturas[10];
  
  for(int i = 0; i < 10; i++) {
    printf("Digite a temperatura da cidade %d: ", i+1);
    scanf("%d", &temperaturas[i]);
  }

  for(int i = 0; i < 10; i++) {
    printf("%.2f\n", fahrenheit(temperaturas[i]));
  }

  return 0;
}

float fahrenheit(int temperatura) {
  return (temperatura-32)/1.8f;
}