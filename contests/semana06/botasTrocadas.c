#include <stdio.h>

int main(){
  int n, tam, total = 0;
  char lado;
  int d[61], e[61];

  scanf("%d", &n);
  for(int i = 30; i <= 60; i++) {
    d[i] = 0;
    e[i] = 0;
  }

  for(int i = 0; i < n; i++) {
    scanf("%d %c", &tam, &lado);
    if(lado == 'E') {
      e[tam]++;
    } else {
      d[tam]++;
    }
  }

  for(int i = 30; i <= 60; i++) {
    if(d[i] < e[i]) {
      total += d[i];
    } else {
      total += e[i];
    }
  }

  printf("%d\n", total);
  return 0;
}