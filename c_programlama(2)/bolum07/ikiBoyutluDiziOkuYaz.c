// ikiBoyutluDiziOkuYaz
// 14.04.2003

#include <stdio.h>

int main() {

  int i=0,j=0;
  int matris[3][4];

  // diziye yaz:
  for(i=0;i<3;i++) {   // satirlar icin
    for(j=0;j<4;j++) { // kolonlar icin
      matris[i][j]= i + j;
    }
  }

  // diziden oku
  for(i=0;i<3;i++) {   // satirlar icin
    for(j=0;j<4;j++) { // kolonlar icin
      printf("%d\t",matris[i][j]);
    }
     printf("\n\n");
  }

  return 0;
}

