#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
  FILE* file = fopen(argv[1], "rt");
  if(!file)
    return -1;
  char* word = argv[2];
  int len = strlen(word);

  int k = 0, count = 0;
  while(!feof(file)) {
    char c = fgetc(file);
    if(c==word[k])
      k++;
    else
      k = 0;
    /*
    if(!word[k]) {
      count++;
      k = 0;
    }
    */
    if(len == k) {
      count++;
      k = 0;
    }
  }

  fclose(file);
  printf("%s => %d\n", word, count);
  return 0;
}