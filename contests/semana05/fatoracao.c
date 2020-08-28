#include <stdio.h>

int main() {
  int n, divisor = 2, cont = 0;
  scanf("%d", &n);
  
  while(n > 1) {
    if(n % divisor == 0) {
      cont++;
      n /= divisor;
      if(n == 1) {
        printf("%d\t%d", divisor, cont);
      }
    } else {
      if(cont != 0) {
        printf("%d\t%d\n", divisor, cont);
      }
      cont = 0;
      divisor++;
    }
  }

  printf("\n");
  return 0;
}