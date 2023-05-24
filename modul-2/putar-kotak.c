// Solusi 1 : Logika Transpose Matrix
// Solusi 2 : Tukar nilai variabel (Manual swap)

#include <stdio.h>

int main()
{
    int kasus;
    char a, b, c, d, e, f, g, h, i;
    char temp;
    int satu, dua, tiga, empat, lima, enam, tujuh, delapan, sembilan;
    int temp2;
    scanf("%d", &kasus);

    // Matrix Transpose
    // a b c    a d g
    // d e f -> b e h
    // g h i    c f i

    if (kasus == 1)
    {
        scanf("%d %d %d %d %d %d %d %d %d", &satu, &dua, &tiga, &empat, &lima, &enam, &tujuh, &delapan, &sembilan);
        printf("%d %d %d\n%d %d %d\n%d %d %d", satu, empat, tujuh, dua, lima, delapan, tiga, enam, sembilan);
    }
    // kasus 2
    else
    {
        scanf(" %c %c %c %c %c %c %c %c %c", &a, &b, &c, &d, &e, &f, &g, &h, &i);
        printf("%c %c %c\n%c %c %c\n%c %c %c", a, d, g, b, e, h, c, f, i);
    }

    return 0;
}
