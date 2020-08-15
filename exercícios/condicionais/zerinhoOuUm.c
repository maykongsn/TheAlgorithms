#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get() {
   int n = rand() % 2;
   return n;
}

int main() { 
   srand( (unsigned int) clock() );

   int n;
   printf("TOTAL DE JOGADORES: ");
   scanf("%d", &n);

   int data[n];
   int pontos[n];

   for (int i=0;i<n;i++)
      pontos[i]=0;

   int rodada = 0;
   while (rodada<10) {

      // jogadas
      for (int k=0; k<n; k++)  
         data[k] = get();
    
      int qZero = 0;
      int qUm = 0;

      for (int i=0; i<n; i++)  {
         if (data[i]==0)
            qZero++;
         else
            qUm++;
      }
 
      if (qZero==1)
         for (int j=0;j<n;j++)
            if (data[j]==0) {
               //printf("%5d ganhou", j);
               pontos[j]++;
               break;
            }

       if (qUm==1)
         for (int j=0; j<n; j++)
            if (data[j]==1) {
               // printf("%5d ganhou", j);
               pontos[j]++;
               break;
            }

      //sprintf("\n"); 
      rodada++;
   }

   //RESULTADOS

   for (int i=0; i<n; i++) {
      printf("%3d => %d pontos\n", i, pontos[i]);
   } 


   return 0;
}