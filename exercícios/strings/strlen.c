#include <stdio.h>
#include <string.h>

char toUpper(char c) {
  if(c>='a' && c<='z'){
    return c-'a'+'A';
  } else {
    return c;
  }
}

int str_len(char x[]) {
  int len = 0;
  for(int i=0; x[i]; i++) {
    len++;
  }
  return len;
}

int main() {
  char s[100] = "hoje eh sexta feira";

  int len = str_len(s);
  int len2 = strlen(s);

  int maiusculo = toUpper('b');

  printf("%c\n", maiusculo);
  printf("str_len: %d\nstrlen: %d\n", len, len2);
  return 0;
}