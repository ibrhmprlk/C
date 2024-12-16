// aracKonum.c
// 21.03.2003

#include <stdio.h>

int main() {

  int kentMesafe = 450; // km
  int arac1_hiz = 40;   // km/saat
  int arac2_hiz = 65;   // km/saat
  int arac1_konum=120;  // baslangictaki konum
  int arac2_konum=0;    // baslangictaki konum
  int aktifSaat = 0; 

  printf("saat\t\t");
  printf("1.arac konum\t");
  printf("2.arac konum\n");
  printf("-------\t\t------\t\t------\n\n");

  do {
    aktifSaat++; // dongu her yorumlanisinda 1 saat gececek
    arac1_konum += arac1_hiz;
    arac2_konum += arac2_hiz;

    // konumlari ekrana yaz:
    printf("%d\t\t", aktifSaat);
    (arac1_konum<kentMesafe) ? printf("%d\t\t", 
    arac1_konum) : printf("arac vardi\t");
    (arac2_konum<kentMesafe) ? printf("%d", arac2_konum) : 
    printf("arac vardi");
    printf("\n");

    // her iki arac kente ulasana kadar dongu devam etsin:
  } while(arac1_konum<kentMesafe ||arac2_konum<kentMesafe);

}

