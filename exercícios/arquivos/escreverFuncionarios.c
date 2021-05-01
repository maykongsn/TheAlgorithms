#include <stdio.h>

int main() {
  FILE* arquivo = fopen("funcionarios.txt", "a");

  char opcao;
  char nome[100];
  int salario, dependentes;
  do {
    printf("Digite\n1 - Cadastrar funcionário\n2 - Sair\n");
    scanf("%c", &opcao);
    if(opcao == '1') {
      printf("Digite o nome:\n");
      scanf("%s", nome);
      printf("Digite o salário:\n");
      scanf("%d", &salario);
      printf("Digite o número de dependentes:\n");
      scanf("%d", &dependentes);
      fprintf(arquivo, "\n%s\t\t%d\t\t%d", nome, salario, dependentes);
    }
  } while(opcao != '2');

  fclose(arquivo);
  return 0;
}