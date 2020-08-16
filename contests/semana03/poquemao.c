#include <stdio.h>

int main(){
  int n, pokemao[3], aux, cont = 0;
  scanf("%d",&n);
  
  for (int i = 0; i < 3; i++){
    scanf("%d", &pokemao[i]);
  }

  for(int i = 0; i < 3; i++){
    for(int j = i+1; j < 3; j++){
      if (pokemao[i] > pokemao[j]){
        aux = pokemao[i]; 
        pokemao[i] = pokemao[j];
        pokemao[j] = aux;
      }
    }
  }
  
  if(pokemao[0] < n){
    cont = 1;
  }
  if(pokemao[0]+pokemao[1] < n){
    cont = 2;
  }
  if(pokemao[0]+pokemao[1]+pokemao[2] < n){
    cont = 3;
  }
  
  printf("%d\n", cont);
}