// powFonksiyonu
// 02.04.2003

#include <stdio.h>
#include <math.h>

int main() {

    int i=0;
    double toplam=0;
    double aktifEleman=0;

    printf("serinin ilk 25 elemaninin toplami: \n\n");

    for(i=1;i<=25;i++) {
      aktifEleman = 1 / (pow(2,i));
      toplam += aktifEleman;

    }
    printf("%f",toplam);
  return 0;
}

