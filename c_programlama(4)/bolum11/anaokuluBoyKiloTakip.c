// anaokuluBoyKiloTakip.c
// 25.06.2003

#include <stdio.h>

struct ogrenci {
  char *ogrenciIsimSoyisim;
  float ogrenciKilo;
  float ogrenciBoy;
};

// prototipler
void ogrenciBilgileriniGir(struct ogrenci *);
void ogrenciBilgileriniYazdir(struct ogrenci *);
float kiloBoyOranBul(struct ogrenci *, int);
void menuHazirla();
// ---

void menuHazirla(){

  printf("*******************************************\n");
  printf("*                                         *\n");
  printf("*   1. Ogrenci Bilgilerini Yazdir         *\n");
  printf("*   2. Kilo / Boy orani bul (en yuksek)   *\n");
  printf("*   3. Kilo / Boy orani bul (en dusuk)    *\n");
  printf("*                                         *\n");
  printf("*******************************************\n");
}


float kiloBoyOranBul(struct ogrenci *ogrenciler, int maxOrMin){
  int i=0;
  float oranAktif=0,oranDondur;

  if (maxOrMin==1) oranDondur=0; else oranDondur = 999;

  for(i=0;i<5;i++){
    oranAktif=(ogrenciler[i].ogrenciKilo) / (ogrenciler[i].ogrenciBoy);

    switch (maxOrMin) {
      case 1: // kilo / boy en buyuk orani bul
        if (oranAktif>oranDondur) oranDondur = oranAktif;
        break;
      default: // kilo / boy en kucuk orani bul
        if (oranAktif<oranDondur) oranDondur = oranAktif;
    }
  }
  return oranDondur;

}

void ogrenciBilgileriniYazdir(struct ogrenci *ogrenciler){
  int i=0;

  for(i=0;i<5;i++){
    printf("Isim Soyisim:\t %s\n",ogrenciler[i].ogrenciIsimSoyisim);
    printf("Kilo:\t\t %f\n",ogrenciler[i].ogrenciKilo);
    printf("Boy:\t\t %f\n\n",ogrenciler[i].ogrenciBoy);
  }
}


void ogrenciBilgileriniGir(struct ogrenci *ogrenciler){
  // sirayla ogrencilere ait bilgileri girelim:
  ogrenciler[0].ogrenciIsimSoyisim="Hakan Gok";
  ogrenciler[0].ogrenciKilo=19;
  ogrenciler[0].ogrenciBoy=1.08;

  ogrenciler[1].ogrenciIsimSoyisim="Hakan Ozcan";
  ogrenciler[1].ogrenciKilo=23;
  ogrenciler[1].ogrenciBoy=1.02;

  ogrenciler[2].ogrenciIsimSoyisim="Leyla Osan";
  ogrenciler[2].ogrenciKilo=17;
  ogrenciler[2].ogrenciBoy=1.04;

  ogrenciler[3].ogrenciIsimSoyisim="Firat Soylu";
  ogrenciler[3].ogrenciKilo=24;
  ogrenciler[3].ogrenciBoy=1.18;

  ogrenciler[4].ogrenciIsimSoyisim="Oguz Kilinc";
  ogrenciler[4].ogrenciKilo=15;
  ogrenciler[4].ogrenciBoy=0.99;
}

int main(){

  int i=0, secim;
  struct ogrenci anaokuluOgrenciler[5]; // 5 ogrencimiz var

  ogrenciBilgileriniGir(anaokuluOgrenciler);
  menuHazirla();

  do{
    printf("\n\nLutfen menuden bir secim yapiniz:");
    secim=getch();
    putchar(secim);
    putchar('\n');
    switch (secim){
      case 49:
        ogrenciBilgileriniYazdir(anaokuluOgrenciler);
        break;
      case 50:
        printf("En yuksek oran: %f",kiloBoyOranBul(anaokuluOgrenciler, 1));
        break;
      case 51:
        printf("En dusuk oran: %f ", kiloBoyOranBul(anaokuluOgrenciler, 0));
        break;
      case 52:
        exit(0);
        break;
      default:
        printf("Lutfen 1, 2, 3 veya 4 seciniz...");
    }
   }while(secim!=4);

  return 0;
}
