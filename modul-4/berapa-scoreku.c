#include <stdio.h>
#include <math.h>
#include <string.h>

struct pesertaInterface {
  char name[100];
  int score;
};


int main () {
  struct pesertaInterface peserta[10];  

  int m, n;
  scanf("%d %d", &m, &n);

  int m2 = m;
  int countStudent = 0;
  int highestScore = 0;

  while (m2--) {
    char inputName[100];
    char inputSoal;
    int inputScore;
    scanf("%s", inputName);
    scanf(" %c", &inputSoal);
    scanf("%d", &inputScore);

    //cari apakah struct peserta dengan nama tersebut sudah pernah dibuat
    
    int flag = 1;
    int found = -1;
    for (int i = 0; i < countStudent; i++) {
      if(strcmp(inputName, peserta[i].name) == 0) {
        flag = 0;
        found = i;
        break;
      }      
    }

    if(flag) {
      strcpy(peserta[countStudent].name, inputName);
      peserta[countStudent].score = inputScore; 
      if(highestScore < peserta[countStudent].score) highestScore = peserta[countStudent].score;
      countStudent++;
    } else {
      peserta[found].score += inputScore; 
      if(highestScore < peserta[found].score) highestScore = peserta[found].score;
    }
  }

  if(highestScore < n) printf("YES MENANG\n");
  else printf("NICE TRY");
}
