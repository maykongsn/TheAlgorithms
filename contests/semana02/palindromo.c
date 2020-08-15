#include <stdio.h>

int main() {
  int n, aux, reverso = 0;

  scanf("%d", &n);

  aux = n;

  while(aux != 0) {
    reverso = reverso * 10 + aux % 10;
    aux = aux / 10;
  }
  
  if(reverso == n) {
    printf("1\n");
  } else {
    printf("0\n");
  }
  return 0;
}
