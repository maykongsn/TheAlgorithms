#include <stdio.h>

int main() {
  int n1,n2,n3;
  int qtd = 0;

  scanf("%d\n%d\n%d",&n1,&n2,&n3);
  if(n1 == n2) {
    qtd = 2;
  }

  if(n1 == n3) {
    qtd = 2;
  }

  if(n2 == n3) {
    qtd = 2;
  }

  if((n1 == n2) && (n2 == n3)) {
    qtd = 3;
  }

  printf("%d\n",qtd);

  return 0;
}