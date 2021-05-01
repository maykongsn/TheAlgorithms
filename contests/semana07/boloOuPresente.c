#include <stdio.h>

int main() {
  int d, e, t, k = 0, temp = 0;
  scanf("%d %d %d", &d, &e, &t);

  char* semana[] = {"presente", "bolo", "bolo", "bolo", "bolo", "bolo", "presente"};

  for(int i = 0; i <= t; i++) {
    if((e%4==0 && e%100!=0) || e%400==0) {
      k += 366;
    } else { 
      k += 365;
    }
    e++;
  }

  for(int i = 0; i < k; i++) {
    d++;
    if(d==7) {
      d = 0;
    }
  }

  printf("%s\n", semana[d]);
  return 0;
}