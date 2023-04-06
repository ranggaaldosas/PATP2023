#include <stdio.h>

int main() {
    int a, b, i, j;
    scanf("%d %d %d %d", &a, &b, &i, &j);
    int ij = ((1 << (j - i + 1)) - 1) << i;
    a &= ~ij;
    int bits = (b << i) & ij;
    printf("%d", a | bits);
    return 0;
}

