// bugdayVeSatrancTahtasi.c
// 30.03.2003

#include <stdio.h>

int main() {

  int i=1;              // dongu sayaci
  double aktifKaredekiBugday=1;
  double toplamBugday=0;

  for (i=1;i<=64;i++) {
    printf("%d. kare icin verilecek bugday sayisi: %20.0f\n",i,aktifKaredekiBugday);
    toplamBugday+=aktifKaredekiBugday;
    aktifKaredekiBugday*=2;
  }

  printf("\nbilgine verilecek toplam bugday sayisi: %20.0f",toplamBugday);

  return 0;
}

