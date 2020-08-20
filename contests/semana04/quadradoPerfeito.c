#include <stdio.h>
#include <math.h>

int main() {
  int a, b, raiz, i = 0;
  scanf("%d %d", &a, &b);

  if(a > b) {
    printf("invalido");
  }

  while(a <= b) {
    raiz = sqrt(a);
    if(raiz*raiz == a) {
      if(i==0) {
        printf("%d", a);
      } else {
        printf(" %d", a);
      }
      i++;
    }
    a++;
  }

  printf("\n");

  return 0;
}