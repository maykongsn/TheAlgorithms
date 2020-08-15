#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int x) {
  int d = 2;
  bool res = true;
  while (d*d <= x) {
    if(x%d == 0) {
      res = false;
      break;
    }
    d++;
  }

  return res;
}

int main() {
  int primos[30];
  int id = 0;
  int x = 2;

  while(id < 30) {
    if(ehPrimo(x)) {
      primos[id] = x;
      id++;
    }

    x++;
  }

  for(int j = 29; j >= 0; j--) {
    printf("%d ", primos[j]);
  }

  return 0;
}