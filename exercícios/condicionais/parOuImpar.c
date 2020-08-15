#include <stdio.h>

int selectOption(int n) {
  scanf("%d", &n);
  if(n < 0 || n > 10) {
    return -1;
  } else {
    return n;
  }
}

int main() {
  char j;
  int n1, n2, r, p1, p2;

  for(int i = 0; i < 3; i++) {
    scanf("%s", &j);
    
    if(j != 'p' && j != 'i') {
      printf("Opcao invalida!\n");
      return 1;
    }

    int n1 = selectOption(1);
    int n2 = selectOption(2);

    if(n1 < 0 || n2 < 0) {
      printf("Opcao invalida!\n");
      return 2;
    }

    r = n1+n2;
  
    if(j == 'p' && r % 2 == 0) {
      printf("Ganha\n");
      p1++;
    } else if(j == 'i' && r % 2 != 0) {
      printf("Ganha\n");
      p1++;
    } else {
      printf("Perde\n");
      p2++;
    }
  }

  if(p1 > p2) {
    printf("Jogador 1 venceu!\n");
  } else {
    printf("Jogador 2 venceu!\n");
  }

  return 0;
}