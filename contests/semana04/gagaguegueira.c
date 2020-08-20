#include <stdio.h>

int main() {
	char str[100], c, i = 0;

  do {
    scanf("%s%c", str, &c);
    if(i == 0) {
      printf("%s %s", str, str);
    } else {
      printf(" %s %s", str, str);
    }
		i++;
  } while(c != '\n');

  printf("\n");
	return 0;
}