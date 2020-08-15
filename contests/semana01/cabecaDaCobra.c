#include <stdio.h>

int main() {
  int n, x, y, s;
  char c;
  
  scanf("%d\n%d\n%d\n%s\n%d", &n, &x, &y, &c, &s);

  if(c == 'R') {
    for(int i = 0; i < s; i++) {
      x++;
      if(x > n-1) {
        x = 0;
      }
    }
  }

  if(c == 'L') {
    for(int i = 0; i < s; i++) {
      x--;
      if(x < 0) {
        x = n - 1;
      }
    }
  }

  if(c == 'U') {
    for(int i = 0; i < s; i++) {
      y--;
      if(y < 0) {
        y = n - 1;
      }
    }
  }

  if(c == 'D') {
    for(int i = 0; i < s; i++) {
      y++;
      if(y > n-1) {
        y = 0;
      }
    }
  }

  printf("%d %d\n", x, y);

  return 0;
}