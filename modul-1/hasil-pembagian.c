#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  
  int m = n % 4;
  int x = 1 << m;
  
  printf("%d", x);
}
