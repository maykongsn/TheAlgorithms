#include <stdio.h>
#include <ctype.h>

int main() {
  char caractere;

  scanf("%c", &caractere);
  
  if(caractere>='a' && caractere<='z') {
    caractere = toupper(caractere);
    printf("%c\n", caractere);
  } else if(caractere>='A' && caractere<='Z') {
    caractere = tolower(caractere);
    printf("%c\n", caractere);
  } else {
    printf("%c\n", caractere);
  }

  return 0;
}