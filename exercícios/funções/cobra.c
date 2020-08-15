#include <stdio.h>

int right(int x, int s, int n) {
  for(int i = 0; i < s; i++) {
    x++;
    if(x > n-1) {
      x = 0;
    }
  }
  return x;
}

int left(int x, int s, int n) {
 for(int i = 0; i < s; i++) {
    x--;
    if(x < 0) {
      x = n - 1;
    }
  }
  return x;
}

int up(int y, int s, int n) {
  for(int i = 0; i < s; i++) {
    y--;
    if(y < 0) {
      y = n - 1;
    }
  }
  return y;
}

int down(int y, int s, int n) {
  for(int i = 0; i < s; i++) {
    y++;
    if(y > n-1) {
      y = 0;
    }
  }
  return y;
}

int main() {
  int n, x, y, s;
  char c;
  
  scanf("%d\n%d\n%d\n%s\n%d", &n, &x, &y, &c, &s);

  if(c == 'R') {
    x = right(x, s, n);
  }

  if(c == 'L') {
    x = left(x, s, n);
  }

  if(c == 'U') {
    y = up(y, s, n);    
  }

  if(c == 'D') {
    y = down(y, s, n);
  }

  printf("%d %d\n", x, y);

  return 0;
}