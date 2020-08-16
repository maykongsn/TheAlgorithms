#include <stdio.h>
#include <stdbool.h>

bool verificaIntervalo(int n, int li, int ls) {
    if(n >= li && n <= ls) {
      return true;
    } else {
      return false;
    }
}

int main() {
  int n, li, ls, cont = 0;
  
  scanf("%d", &n);
  scanf("%d%d", &li, &ls);

  int v[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
    
    if(verificaIntervalo(v[i], li, ls)) {
      cont++;
    }
  }

  printf("%d\n", cont);

  return 0;
}
