#include <stdio.h>

void swap(int* a, int* b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

int main(){
  int v[] = {4,5,6,7}, maiori = 0, maiorj = 0;
  int aux;
  for(int k = 0; k < 6; k++) {
    for(int i = 0; i < 4; i++) {
      if(v[i] <= v[i+1]) { 
        maiori = i;
      }
    }
    for(int j = maiori+1; j < 4; j++) {
      if(v[j] > v[maiori]) {
        maiorj = j;
      }
    }
    // aux = 6
    // v[4,5,7,6]
    aux = v[maiori];
    v[maiori] = v[maiorj];
    v[maiorj] = aux;

    for(int i = maiori+1, j = 4-1; i > j; i++, j--) {
      aux = v[i];
      v[i] = v[j];
      v[j] = aux;
    }

    for(int i = 0; i < 4; i++) {
      printf("%d ", v[i]);
    }
    printf("\n");
  } 
  return 0;
}