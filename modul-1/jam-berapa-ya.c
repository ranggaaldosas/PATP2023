#include <stdio.h>

int main() {
  int H1, M1, S1, H2, M2, S2;
  int detik1, detik2, selisih;

  // Input waktu pertama dan kedua
  scanf("%d %d %d", &H1, &M1, &S1);
  scanf("%d %d %d", &H2, &M2, &S2);

  // Konversi ke detik
  detik1 = (H1 * 3600) + (M1 * 60) + S1;
  detik2 = (H2 * 3600) + (M2 * 60 )+ S2;

  // Hitung selisih waktu
  selisih = detik2 - detik1;

  // Tampilkan selisih waktu
  printf("%d\n", selisih);

  return 0;
}
