#include <stdio.h>

int main() {
  int n, isPrimo = 1;

  scanf("%d", &n);

  for(int i = 2; i < n; i++) {
    if(n % i == 0) {
      isPrimo = 0;
    }
  }

  printf("%d\n", isPrimo);

  return 0;
}