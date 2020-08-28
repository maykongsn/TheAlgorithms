#include <stdio.h>

int fibonacciPar(int n) {
  int a = 0, b = 1, soma = 0, res = 0;
  while(b < n) {
    if(b % 2 == 0) {
      res += b;
    }
    soma = a + b;
    a = b;
    b = soma;
  }
  return res; 
}

int main(){
  int n;  
  scanf("%d", &n);

  printf("%d\n", fibonacciPar(n));   
}