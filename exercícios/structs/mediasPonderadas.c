#include <stdio.h>

typedef struct aluno {
  char nome[81];
  char matricula[21];
  float notas[3];
  float media;
} Aluno;

float calcularMedia(int num_pesos, int* pesos, Aluno* aluno) {
  float media = 0;
  int soma_pesos = 0;
  for(int i = 0; i < num_pesos; i++) {
    media += aluno->notas[i]*pesos[i];
    soma_pesos += pesos[i];
  }
  return media/soma_pesos;
}

void calcularMedias(int num_pesos, int* pesos, int num_alunos, Aluno** alunos) {
  for(int i = 0; i < num_alunos; i++) {
    alunos[i]->media = calcularMedia(num_pesos, pesos, alunos[i]);
  }
}

void imprimirAlunos(int num_alunos, Aluno** alunos) {
  for(int i = 0; i < num_alunos; i++) {
    printf("Nome: %s\tMédia: %.2f\n", alunos[i]->nome, alunos[i]->media);
  }
}
int main() {
  Aluno a1 = {"aluno1", "001", {6.5, 8.5, 9.0}};
  Aluno a2 = {"aluno2", "002", {3.5, 4.5, 6.0}};
  Aluno a3 = {"aluno3", "003", {7.5, 7.0, 8.0}};
  Aluno a4 = {"aluno4", "004", {2.0, 4.5, 7.0}};
  Aluno *alunos[5] = {&a1, &a2, &a3, &a4};

  int pesos[] = {1, 2, 3};
  calcularMedias(3, pesos, 4, alunos);
  imprimirAlunos(4, alunos);
  return 0;
}
