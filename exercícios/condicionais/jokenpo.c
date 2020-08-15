#include <stdio.h>

int main() {
  int j1, j2;
  char x, y;
  scanf("%s", &x);
  scanf("%d", &j1);

  scanf("%s", &y);
  scanf("%d", &j2);


  if((j1 < 0 || j1 > 2) || (j2 < 0 || j2 > 2)) {
    printf("Jogada invalida!");
  }

  if(j1 == '0' && j2 == '1') {
    printf("%s", x);
  }
  if(j1 == '0' && j2 == '2') {
    printf("%s", y);
  }
  if(j1 == '1' && j2 == '0') {
    printf("%s", x);
  }
  if(j1 == '1' && j2 == '2') {
    printf("%s", y);
  }
  if(j1 == '2' && j2 == '1') {
    printf("%s", x);
  }
  if(j1 == '2' && j2 == '0') {
    printf("%s", y);
  }
  
  return 0;
}