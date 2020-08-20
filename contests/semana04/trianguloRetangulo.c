#include <stdio.h>

int ehTriangulo(int a, int b, int c) {
  int ehTriangulo = 0;
  if((a < b+c) && (b < a+c) && (c < a+b)) {
    ehTriangulo = 1;
  }

  return ehTriangulo;
}

int main() {
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  if(ehTriangulo(a, b, c)) {
    if(a*a == b*b+c*c) {
      printf("triangulo e retangulo\n");
    } else if(b*b == a*a+c*c) {
        printf("triangulo e retangulo\n");
    } else if(c*c == a*a+b*b) {
      printf("triangulo e retangulo\n");
    } else {
      printf("triangulo mas nao retangulo\n"); 
    }
  } else {
    printf("isso nao eh um triangulo\n");
  }
  return 0;
}
