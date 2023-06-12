#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Mahasiswa {
  char name[100];
  int nrp;
};

void bubbleSort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);
  struct Mahasiswa mhs[n + 1];
  int nrpSort[200];
  int nrpIndex[200];

  for (int i = 0; i < 150; i++) {
    nrpIndex[i] = 0; 
  }

  int i = 0;
  int m = n;
  while (n--) {
    char name[100];
    int nrp;
    scanf("%d %s", &nrp, name);
    strcpy(mhs[i].name, name);
    mhs[i].nrp = nrp;
    nrpIndex[nrp] = i;
    nrpSort[i] = nrp;
    i++;
  }
  bubbleSort(nrpSort, m) ;
  for (int j = 0; j < m; j++) {
    int idx = nrpIndex[nrpSort[j]];
    printf("%s\n", mhs[idx].name);
  }


  return 0;
}


