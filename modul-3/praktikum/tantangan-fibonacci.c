#include <stdio.h>

void rec(int maxLine, int currentLine, int currentCol, long int prevNum1, long int prevNum2) {
  if(maxLine == 1) {
    printf("0\n");
    return;
  }

  if(currentLine == 1) {
    printf("0\n");
    printf("1 ");
    rec(maxLine, currentLine+1, currentCol + 1, prevNum1, prevNum2);
    return;
  }

  if(currentLine > maxLine ) return;
  
  if(currentCol > currentLine) {
    printf("\n");
    rec(maxLine, currentLine+1, 1, prevNum1, prevNum2);
    return;
  }
  
  long int sum = prevNum1 + prevNum2;
  printf("%ld ", sum);
  prevNum1 = prevNum2;
  prevNum2 = sum;
  rec(maxLine, currentLine, currentCol + 1, prevNum1, prevNum2);
}

int main () {
  int N = 10;
  rec(N, 1, 1, 0, 1); 
}
