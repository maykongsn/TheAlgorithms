#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  FILE* file = fopen(argv[1], "rb");
  if(file == 0)
    return -1;
  fseek(file, 0, SEEK_END);
  long fsize = ftell(file);
  char* buf = (char*) malloc(fsize);
  rewind(file);
  for(int k = 0; !feof(file);) {
    char byte;
    fread(&byte, 1, 1, file);
    buf[k++] = byte;
  }
  fclose(file);
  for(int i = 0; i <= fsize/2; i++) {
    int j = fsize - i - 1;
    char b = buf[i];
    buf[i] = buf[j];
    buf[j] = b; 
  }
  FILE* fout = fopen(argv[2], "wb");
  for(int k = 0; k < fsize; k++) {
    char b = buf[k];
    fwrite(&b, 1, 1, fout);
  }
  fclose(fout);

  free(buf);
}