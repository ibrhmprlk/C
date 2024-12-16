// dizileriOkumaVeYazma.c
// 14.04.2003

#include <stdio.h>

int main() {

  int i=0;
  int secim=0;
  int indeks=0;
  double deger=0;
  double dizi[10];

  // dizideki kutulari sifirlarla doldur(sifirla):
  for(i=0;i<10;i++) {
    dizi[i] = 0;
  }

  do {
    // secimi ogren:
    printf("seciminizi yapiniz (cikmak icin -1):\n\n");
    printf("\t1. diziye yazma\n");
    printf("\t2. diziden okuma\n\n");

    scanf("%d",&secim);
    if (secim==-1) break;
    // once indeksi oku ve kontrol et:
    printf("dizi indeksini giriniz:");
    scanf("%d",&indeks);
    if (indeks<0 || indeks>9) {
      printf("indeks 0-9 araliginda olmali!\n");
      continue;
    }
    // simdi secime gore islem yap:
    switch(secim) {
      case 1:
        printf("\ndegeri giriniz:");
        scanf("%lf",&deger);
        // degeri indeks numarasi verilen kutuya koy:
        dizi[indeks] = deger;
        // geri bildirim yap:
        printf("yazma islemi basarili!\n\n");
        break;
      case 2:
        // degeri ekrana yaz:
        printf("dizi[%d]: %f\n\n",indeks, dizi[indeks]);
        break;
      default:
        printf("seciminizi 1 veya 2 olarak yapmalisiniz!\n");
    } // switch sonu
  }while(secim!=-1);
 	return 0;
}

