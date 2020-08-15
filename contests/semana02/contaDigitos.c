#include <stdio.h>

int main() {
  int numeroContato, digitoProcurado, cont = 0;

  scanf("%d\n%d", &digitoProcurado, &numeroContato);

  while(numeroContato > 0) {
    if(numeroContato % 10 == digitoProcurado) {
      cont++;
    }
    numeroContato /= 10;
  }

  printf("%d\n", cont);
  return 0;
}