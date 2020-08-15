#include <stdio.h>

int collatzLength(int n){
  int count = 1;
  while (n != 1) {
    if(n % 2 == 0) {
      n /= 2;
    } else {
      n = n * 3 + 1;
    }
    count++;
  }
  return count;
}

int main(){
  int max = 0, maxi;

  // int i = 999; i > 0; i--
  for(int i = 2; i <= 1000; i++) {
    int collatz = collatzLength(i);
    if(collatz > max) {
      max = collatz;
    }
  }

  printf("%d", max);
  return 0;
}