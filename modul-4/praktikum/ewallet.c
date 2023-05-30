#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct data
{
    int id;
    int duit;
    char nama[100];
};

int main()
{
    int n;
    struct data user[101];
    int idx = 0;
    scanf("%d", &n);
    while (n--)
    {
        char c[100];
        scanf("%s", c);
        if (strcmp(c, "register") == 0)
        {
            user[idx].id = idx + 1;
            scanf("%s%d", user[idx].nama, &user[idx].duit);
            printf("register berhasil, id anda adalah %d dengan nama %s\n", user[idx].id, user[idx].nama);
            idx++;
        }
        else if (strcmp(c, "topup") == 0)
        {
            int id, jumlah;
            scanf("%d%d", &id, &jumlah);
            for (int i = 0; i < idx; i++)
            {
                if (user[i].id == id)
                {
                    user[i].duit += jumlah;
                    printf("topup %d berhasil dilakukan ke %s\n", jumlah, user[i].nama);
                    break;
                }
            }
        }
        else if (strcmp(c, "pay") == 0)
        {
            int id, jumlah;
            scanf("%d%d", &id, &jumlah);
            for (int i = 0; i < idx; i++)
            {
                if (user[i].id == id)
                {
                    if (user[i].duit >= jumlah)
                    {
                        user[i].duit -= jumlah;
                        printf("pembayaran berhasil dilakukan oleh %s\n", user[i].nama);
                    }
                    else
                    {
                        printf("pembayaran tidak berhasil oleh %s\n", user[i].nama);
                    }
                    break;
                }
            }
        }
        else if (strcmp(c, "transfer") == 0)
        {
            int id_pengirim, id_penerima, jumlah;
            scanf("%d%d%d", &id_pengirim, &id_penerima, &jumlah);
            int flag = 1;
            for (int i = 0; i < idx; i++)
            {
                if (user[i].id == id_pengirim)
                {
                    if (user[i].duit >= jumlah)
                    {
                        for (int j = 0; j < idx; j++)
                        {
                            if (user[j].id == id_penerima)
                            {
                                user[j].duit += jumlah;
                                user[i].duit -= jumlah;
                                printf("transfer berhasil dari %s ke %s sebanyak %d\n", user[i].nama, user[j].nama, jumlah);
                                flag = 0;
                                break;
                            }
                        }
                    }
                    else
                    {
                        printf("transfer gagal, saldo tidak mencukupi\n");
                    }
                }
            }
            if (flag == 1)
            {
                printf("transfer gagal, %d belum terdaftar\n", id_penerima);
            }
        }
        else if (strcmp(c, "info") == 0)
        {
            int id;
            scanf("%d", &id);
            for (int i = 0; i < idx; i++)
            {
                if (user[i].id == id)
                {
                    printf("saldo %s adalah %d\n", user[i].nama, user[i].duit);
                    break;
                }
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
