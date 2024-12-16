// komisyonHesapla.c 
// 20.03.2003
#include <stdio.h>

int main() {

  int tekKitapFiyati = 5; // milyon TL
  int siparisMiktari = 0;
  float indirimOrani = 0;
  float indirimsizTutar=0;
  float indirimTutari = 0;
  float toplamTutar=0;

  printf("siparis adetini giriniz: ");
  scanf("%d",&siparisMiktari);

  // orani belirle:
  if (siparisMiktari >= 50) {
    indirimOrani = 0.25;
  } else {
      if (siparisMiktari >= 20 && siparisMiktari < 50) {
        indirimOrani = 0.15;
      } else {
          if(siparisMiktari >= 10 && siparisMiktari < 20)
            indirimOrani = 0.1;
	}
  }  

  // indirimsiz tutari hesapla ve yaz:
  indirimsizTutar = siparisMiktari * tekKitapFiyati;
  printf("indirimsiz tutar: %5.3f milyon TL.\n", indirimsizTutar);

  // indirim tutarini hesapla ve ekrana yaz:
  indirimTutari = siparisMiktari * tekKitapFiyati * 
  indirimOrani;
  printf("indirim tutari: %5.3f milyon TL.\n", indirimTutari);

  // toplam tutari ekrana yaz:
  toplamTutar = indirimsizTutar - indirimTutari;
  printf("siparislerinizin toplam tutari: %5.3f milyon TL.\n", toplamTutar);

  return 0;
}

