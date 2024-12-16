// dongulerleDikdortgenFonksiyonlu.c
// 02.04.2003

#include <stdio.h>

void dikdortgenCiz(int enUzunluk, int boyUzunluk) {

  char karakter=0;
  int i=0;
  int j=0;

  // once sol ust koseyi ciz:
  karakter=218; // sol kose
  printf("%c",karakter);

  // ust kenari(duz yatay cizgi) ciz:
  karakter=196; // duz yatay cizgi
  for(i=0;i<enUzunluk;i++) {
    printf("%c",karakter);
  }
  // sag koseyi ciz:
  karakter=191; // sag kose
  printf("%c\n",karakter);

  // simdi govdeyi(orta kismi) cizebiliriz:
  for(i=0;i<boyUzunluk;i++) {
    karakter=179;               // sol dik cizgi
    printf("%c",karakter);
    karakter=32;                // bosluk karakteri
    for(j=0;j<enUzunluk;j++) { // aradaki bosluklar
      printf("%c",karakter);
    }
    karakter=179;
    printf("%c\n",karakter);      // sag dik cizgi
  }

  // alt kisimlari ciz:
  // sol alt kenari ciz:
  karakter=192; // sol kenar
  printf("%c",karakter);

  // alt kenari(duz yatay cizgi) ciz:
  karakter=196; // duz yatay cizgi
  for(i=0;i<enUzunluk;i++) {
    printf("%c",karakter);
  }
  // sag alt kenari ciz:
  karakter=217; // sag kenar
  printf("%c\n",karakter);


}

int main() {

  int enUzunluk=0;
  int boyUzunluk=0;

  printf("en ve boy uzunlugunu giriniz: ");
  scanf("%d%d",&enUzunluk,&boyUzunluk);
  printf("\n\n");

  // dikdortgeni cizdir:
  dikdortgenCiz(enUzunluk, boyUzunluk);

  return 0;
}

