#include <stdio.h>
#include <string.h>

int main() {
  char texto[100], c;
  int key, limite = 10;
  do {
    scanf("%s%c", texto, &c);
  } while(c != '\n');
  scanf("%d", &key);
  
  while(key >= limite) {
    limite *= 10;
  }

  int v[strlen(texto)];
  int aux = limite;
  for(int i = 0; i < strlen(texto); i++) {
    aux /= 10;
    if(aux == 0) {
      aux = limite / 10; 
    }
    v[i] = (key / aux) % 10;
  }

  for(int i = 0; i < strlen(texto); i++) {
    int res = texto[i]^v[i];
    printf("%c", res);
  }

  printf("\n");
  return 0;
}