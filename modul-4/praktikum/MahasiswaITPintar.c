#include <stdio.h>

struct Mahasiswa
{
    char nama[101];
    int nim;
    float ipk;
};

int main()
{
    int n;
    scanf("%d", &n);

    struct Mahasiswa mhs[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %f", mhs[i].nama, &mhs[i].nim, &mhs[i].ipk);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %d %.2f\n", mhs[i].nama, mhs[i].nim, mhs[i].ipk);
    }

      return 0;
}