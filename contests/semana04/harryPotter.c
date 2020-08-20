#include <stdio.h>

int main() {
  char q1, q2, q3, q4;
  int acertos = 0;

  scanf("%c\n%c\n%c\n%c", &q1, &q2, &q3, &q4);

  if(q1 == 'd') {
    acertos++;
  }

  if(q2 == 'a') {
    acertos++;
  }

  if(q3 == 'c') {
    acertos++;
  }

  if(q4 == 'd') {
    acertos++;
  }

  switch(acertos) {
    case 0:
      printf("Nunca assistiu\n");
    break;
    case 1:
      printf("Ja ouviu falar\n");
    break;
    case 2:
      printf("Interessado no assunto\n");
    break;
    case 3:
      printf("Fa\n");
    break;
    case 4:
      printf("Super Fa\n");
    break;
  }

  return 0;
}