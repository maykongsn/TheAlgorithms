#include <stdio.h>
#include <malloc.h>

int* getvec(int n) {
  int* fib = (int*) malloc(n*sizeof(int));
  fib[0] = 1;
  fib[1] = 1;
  for(int i = 2; i < n; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }
  return fib;
}

int main() {
  int* p = getvec(10);
  for(int i = 0; i<10; i++) {
    printf("%d ", p[i]);
  }
  free(p);
  return 0;
}