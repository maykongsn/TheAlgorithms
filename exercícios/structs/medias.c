#include <stdio.h>

typedef struct aluno {
  char nome[81];
  char matricula[21];
  float nota1, nota2, nota3;
} Aluno;


float calculaMedia(Aluno* aluno){
  return (aluno->nota1 + aluno->nota2 + aluno->nota3)/3;
}

void imprimeAprovados(int n, Aluno** alunos){
  float media;
  for(int i = 0; i < n; i++) {
    media = calculaMedia(alunos[i]);
    if(media >= 7) {
      printf("Nome: %s\tMatrícula: %s\tMédia: %.2f\n", alunos[i]->nome, alunos[i]->matricula, media);
    }
  }
}

int main() {
  Aluno a1 = {"aluno1", "001", 9.5f, 9.0f, 10.0f};
  Aluno a2 = {"aluno2", "002", 2.0f, 5.8f, 6.0f};
  Aluno a3 = {"aluno3", "003", 7.0f, 6.0f, 3.5f};

  Aluno *alunos[3] = {&a1, &a2, &a3};

  imprimeAprovados(3, alunos);
  return 0;
}