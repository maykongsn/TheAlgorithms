#include <stdio.h>

void ehDivisivel(int x) {
    if(x % 11 == 0 || x == 0){
        printf("sim\n");
    } else {
        printf("nao\n");
    }
} 

int main(){
    int n, x = 0, sp = 0, si = 0, aux = 0, cont = 0, v[20];
    scanf("%d",&n);

    for(int i = 0; n > 0; i++){
        aux = n % 10;
        n /= 10;
        v[i] = aux;
        cont++;
    }

    for(int j = 0; j < cont; j++){    
        sp += v[j];
        j++;
    }

    for(int j = 1; j < cont; j++){    
        si += v[j];
        j++;
    }

    x = sp - si;
    ehDivisivel(x);

    return 0;
}