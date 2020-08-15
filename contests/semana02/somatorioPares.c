#include <stdio.h>

int main() {
  int a, b, soma = 0;
  scanf("%d\n%d", &a, &b);


  for(int i = a; i <= b; i++) {
    if(i % 2 == 0) {
      soma += i;
    }
  }

  if(a > b) {
    printf("invalido\n");
  } else {
    printf("%d\n", soma);
  }

  return 0;
}