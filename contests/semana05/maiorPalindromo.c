#include <stdio.h>
#include <math.h>

int ehPalindromo(int n) {
  int res = 0;
  int aux = n;
  while(aux != 0) {
    res = res * 10 + aux % 10;
    aux /= 10;
  }

  if(res == n) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n, m, min = 0, aux;
  
  scanf("%d %d", &n, &m);
  int v[m];
  
  for(int i = 0; i < m; i++) {
    v[i] = 0;
  }

  for(int i = pow(10, n)-1; i > pow(10, n-1); i--) {
    for(int j = i; j > pow(10, n-1); j--) {
      if(ehPalindromo(i*j) && i*j > v[min]) {
        v[min] = i*j;
        for(int k = 0; k < m; k++) {
          if(v[k] < v[min]) {
            min = k;
          }
        }
      }
    }
  }

  for(int i = 0; i < m; i++) {
    for(int j = 0; j < m; j++) {
      if(v[i] > v[j]) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }
  }

  for(int i = 0; i < m; i++) {
    printf("%d\n", v[i]);
  }

  return 0;
}