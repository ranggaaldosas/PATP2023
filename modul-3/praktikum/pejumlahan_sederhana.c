#include <stdio.h>

int sumOfDigits(int n) {
  if (n < 10) {
    return n;
  } else {
    return (n % 10) + sumOfDigits(n / 10);
  }
}

int main() {
  int num;
  scanf("%d", &num);
  int result = sumOfDigits(num);
  printf("%d", result);
  return 0;
}
