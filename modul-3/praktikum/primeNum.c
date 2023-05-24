#include <stdio.h>
#include <math.h>

int is_Prime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int jumlah_bilangan_prima(int awal, int akhir)
{
    int jumlah = 0;
    for (int num = awal; num <= akhir; num++)
    {
        if (is_Prime(num))
            jumlah += num;
    }
    return jumlah;
}

int main()
{
    int awal, akhir;
    scanf("%d", &awal);
    scanf("%d", &akhir);

    int hasil = jumlah_bilangan_prima(awal, akhir);

    printf("%d\n", hasil);

    return 0;
}
