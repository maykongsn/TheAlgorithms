#include <stdio.h>

int main() {
  int nl, nc, cont = 0, ant = 0;

  scanf("%d %d", &nl, &nc);

  int m[nl][nc];


  for(int i = 0; i < nl; i++) {
    for(int j = 0; j < nc; j++) {
      scanf("%d", &m[i][j]);
    }
  }
  // 0 0 0
  // 0 0 0
  // 0 0 0
  
  for(int j = 0; j < nc; j++) {
    for(int i = 0; i < nl; i++) {
      if(m[i][j] < ant) {
        cont++;
      }  
      ant = m[i][j];
    }
    ant = 0;
  }

  printf("%d\n", cont);
  return 0;
}