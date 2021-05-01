#include <stdio.h>

int tamanho(char texto[]);

int caixaBaixa(char string);
int caixaAlta(char string);

int contaCaixaBaixa(char texto[]);
int contaCaixaAlta(char texto[]);

char paraCaixaBaixa(char string);
char paraCaixaAlta(char string);

void stringCaixaBaixa(char texto[]);
void stringCaixaAlta(char texto[]);

int contaPalavras(char texto[]);

void capitalizar(char texto[]);

int main() {
  char texto[81];
  printf("Digite um texto: ");
  scanf("%80[^\n]", texto);

  char string = 'a';
  if(caixaBaixa(string)) {
    printf("Caixa baixa\n");
  } else if(caixaAlta(string)) {
    printf("Caixa alta\n");
  }

  printf("Quantidade de letras em caixa baixa: %d\n", contaCaixaBaixa(texto));
  printf("Quantidade de letras em caixa alta: %d\n", contaCaixaAlta(texto));
  printf("Tamanho do texto: %d\n", tamanho(texto));

  char string = 'a';
  printf("%c\n", paraCaixaAlta(string));
  printf("%c\n", paraCaixaBaixa(string));
  
  stringCaixaAlta(texto);
  printf("Texto em caixa alta: %s\n", texto);

  stringCaixaBaixa(texto);
  printf("Texto em caixa baixa: %s\n", texto);

  printf("Quantidade de palavras: %d\n", contaPalavras(texto));

  capitalizar(texto);
  printf("Texto capitalizado: %s\n", texto);

  return 0;
}

int tamanho(char texto[]) {
  int tamanho = 0;
  for(int i = 0; texto[i] != '\0'; i++) {
    tamanho++;
  }
  return tamanho;
}

int caixaBaixa(char string) {
  if(string >= 'a' && string <= 'z') {
    return 1;
  } else {
    return 0;
  }
}

int caixaAlta(char string) {
  if(string >='B' && string <= 'Z') {
    return 1;
  } else {
    return 0;
  }
}

int contaCaixaBaixa(char texto[]) {
  int contador = 0;
  for(int i = 0; i < tamanho(texto); i++) {
    if(caixaBaixa(texto[i])) {
      contador++;
    }
  }
  return contador;
}


int contaCaixaAlta(char texto[]) {
  int contador = 0;
  for(int i = 0; i < tamanho(texto); i++) {
    if(caixaAlta(texto[i])) {
      contador++;
    }
  }
  return contador;
}

char paraCaixaBaixa(char string) {
  if(caixaAlta(string)) {
    return string-'a'+'A';
  }
  return string;
}

char paraCaixaAlta(char string) {
  if(caixaBaixa(string)) {
    return string-'a'+'A';
  }
  return string;
}

void stringCaixaBaixa(char texto[]) {
  for(int i = 0; i < tamanho(texto); i++) {
    texto[i] = paraCaixaBaixa(texto[i]);
  }
}

void stringCaixaAlta(char texto[]) {
  for(int i = 0; i < tamanho(texto); i++) {
    texto[i] = paraCaixaAlta(texto[i]);
  }
}

int contaPalavras(char texto[]) {
  int contador = 1;
  for(int i = 0; i < tamanho(texto); i++) {
    if(texto[i] == ' ' && texto[i+1] != ' ') {
      contador++;
    }
  }

  return contador;
}

void capitalizar(char texto[]) {
  for(int i=0; i < tamanho(texto); i++){
    if(i == 0 && caixa_baixa(texto[i])){
      texto[i] = para_caixa_alta(texto[i]);
    }else if(texto[i] == ' ' && caixa_baixa(texto[i+1])){
      ++i;
      texto[i] = para_caixa_alta(texto[i]);
    }else if(texto[i-1] != ' ' && caixa_alta(texto[i])){
      texto[i] = para_caixa_baixa(texto[i]);
    }
  }
}
