#include <stdio.h>

int jumlahKelompok = 0;
int anggotaTerbanyak = 0;

int kel[100000];
int flag[100000];

void kelompokin(int index, int len, int count) {
  flag[index] = 1;
  count ++;
  if(count > anggotaTerbanyak) anggotaTerbanyak = count;

  if (flag[kel[index]] == 1) {
    jumlahKelompok++;
    for (int i = 1; i <= len; i++) {
      if(flag[i] == 0) {
        kelompokin(i, len, 0);
        return;
      }
    }
    return;
  }

  kelompokin(kel[index], len, count);
}

int main () {
  int N;
  scanf("%d", &N);
  
  for (int i = 1; i <= N; i++) {
    scanf("%d", &kel[i]);
    flag[i] = 0;
  }
  
  kelompokin(1, N, 0);

  printf("%d %d", jumlahKelompok, anggotaTerbanyak);
}
