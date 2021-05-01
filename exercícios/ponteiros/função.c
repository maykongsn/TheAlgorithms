#include <stdio.h>
#include <string.h>

int maxVec(int M[], int n) {
  int res = M[0];
  for(int k=1; k<n; k++) {
    if(M[k] > res) {
      res = M[k];
    }
  }
  return res;
}

void reverse(char* input, char* output) {
    int n = strlen(input);
    for (int k=n-1, i=0; k>=0; k--,i++)
      output[i]=input[k];
    input[n]='\0';
}

int main() {
  char s[] = "socorra-me!";
  char u[100];
  reverse(s, u);
  printf("%s\n", u);
}