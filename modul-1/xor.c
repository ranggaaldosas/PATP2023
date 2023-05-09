#include <stdio.h>

int main() {
    unsigned int a, b, c, d, e, result;
    scanf("%u %u %u %u %u", &a, &b, &c, &d, &e);

    result = ((a ^ b) | c) & (c & d) ^ e;

    printf("%u\n", result);
    return 0;
}
