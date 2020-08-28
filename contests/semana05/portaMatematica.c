#include <stdio.h>
#include <math.h>

int collatzLength(int n) {
  int cont = 1;
  while (n != 1) {
    if(n % 2 == 0) {
      n /= 2;
    } else {
      n = n * 3 + 1;
    }
    cont++;
  }
  return cont;
}

int main() {
  int n, raiz, cont = 0, maior = 0, maxi = 0;

  scanf("%d", &n);
  int v[n];
  int q[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  for(int i = 0; i < n; i++) {
    raiz = sqrt(v[i]);
    if(raiz*raiz == v[i]) {
      q[cont] = v[i];
      cont++;
    }
  }

  for(int i = 0; i < cont; i++) {
    if(collatzLength(q[i]) > maior) {
      maior = collatzLength(q[i]);
      maxi = q[i];
    }
  }

  if(maior == 0) {
    printf("a porta nao existe\n");
  } else {
    printf("%d\n", maxi);
  }
  
  return 0;
}