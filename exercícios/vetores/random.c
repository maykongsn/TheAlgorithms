#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define VEC_SIZE 10
#define NUM_MAX  100

int data[VEC_SIZE];

int randomNumber() {
    return rand() % NUM_MAX;
}

void randomfill() {
    for(int k = 0; k<VEC_SIZE; k++) {
        data[k] = randomNumber();
    }
}

void sort() {

}

void shuffle() {

}

void reverse() {

}

void printVec() {
   for (int k=0; k<VEC_SIZE; k++)   
       printf("%02d\t", data[k]);
}

#define GERAR    1
#define ORDENAR  2
#define BAGUNCAR 3
#define INVERTER 4
#define SAIR     0

#define MENU "\n1-GERAR\n2-ODENAR\n3-BAGUNCAR\n4-INVERTER\n0-SAIR\n"

int main() {
    bool stop = false;
    int value;

    srand( (unsigned int) clock() );

    while (!stop) {
        printf(MENU);
        scanf("%d", &value); 
        switch(value) {
            case GERAR: randomfill(); 
            break;
            case ORDENAR: sort();
            break;
            case BAGUNCAR: shuffle();
            break;
            case INVERTER: reverse();
            break;
            case SAIR: stop = true;       
        }

        if (!stop)
           printVec(); 
    }
                                                                                                                                 

    return 0;
}

