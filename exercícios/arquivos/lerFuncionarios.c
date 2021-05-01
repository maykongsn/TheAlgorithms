#include <stdio.h>



int main() {
  FILE* arquivo = fopen("sherlock_holmes.txt", "r");

  printf("Total de linhas(1): %d\n", contarLinhas(arquivo));
  printf("Total de linhas(2): %d\n", contarLinhasS(arquivo));
  fclose(arquivo);
  
  FILE* arquivo = fopen("funcionarios.txt", "r");
  int num_linhas = contarLinhas(arquivo);
  Funcionario** funcionarios = malloc(num_linhas * sizeof(Funcionario*));

  char linha[100];
  for(int i = 0; i < num_linhas; i++) {
    fgets(linha, sizeof(linha), arquivo);
    Funcionario* funcionario = (Funcionario*) malloc(sizeof(Funcionario));

    sscanf(linha, "%s %d %d", funcionario->nome, &funcionario->salario, &funcionario->dependentes);

    funcionarios[i] = funcionario;
  }

  for(int i = 0; i < num_linhas; i++) {
    printf("Nome: %s, Salário: %d, Dependentes: %d\n", funcionarios[i]->nome, funcionarios[i]->salario, funcionarios[i]->dependentes);
  }
  fclose(arquivo);
  return 0;
}