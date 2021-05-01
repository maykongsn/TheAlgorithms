// #include <stdio.h>

// int main() {
//   unsigned int a = 12, b = 9;

//   printf("AND: %d\n", a&b);
//   printf("OR: %d\n", a|b);
//   printf("XOR: %d\n", a^b);
//   printf("NOT: %d\n", ~-a);  

//   printf("<< 1: %u\n", 1<<1);
//   printf("<< 2: %u\n", 1<<2);
//   printf("<< 3: %u\n", 1<<3);
//   printf("<< 3: %u\n", 1<<4);

//   printf(">> 1: %u\n", 11>>1);
//   printf(">> 2: %u\n", 11>>2);
//   printf(">> 3: %u\n", 11>>3);
//   printf(">> 3: %u\n", 11>>4);

//   return 0;
// }

#include <stdio.h>

unsigned int multiplicar_potencia2(unsigned int n, int m) {
  return n << m;
}

unsigned int dividir_potencia2(unsigned int n, int m) {
  return n >> m;
}

int main() {
  printf("Resultado %u / %d^2: %u\n", 40u, 1, dividir_potencia2(40u, 1));
  printf("Resultado %u / %d^2: %u\n", 40u, 2, dividir_potencia2(40u, 2));
  printf("Resultado %u / %d^2: %u\n", 40u, 3, dividir_potencia2(40u, 3));
  printf("Resultado %u / %d^2: %u\n", 40u, 4, dividir_potencia2(40u, 4));

  return 0;
}


// #include <stdio.h>
// #include <stdbool.h>

// typedef unsigned long long int myint;

// myint inverse(myint x){
//     myint r = 0;
//     while(x > 0){
//         int d = x%10;
//         x /= 10;
//         r = r*10 + d;
//     }
//     return r;
// }

// bool isPalind(myint x){
//     return x == inverse(x);
// }

// myint greatest(){
//     myint max = 0;
//     for(int i=100; i <= 999; i++)
//         for(int j=i; j <= 999; j++){
//             myint p = i*j;
//             if(isPalind(p) && p > max)
//                 max = p;
//         }
//     return max;
// }

// int main(){
//     printf("%lld\n",greatest());
// }