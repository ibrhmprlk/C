// dizilerVeYapilar.c
// 25.06.2003

#include <stdio.h>

int main(){

  int i=0;
  struct kitap {
    char *kitapIsim;
  	char *yazar;
  	char *yayinevi;
  	int sayfaSayisi;
  	int basimYili;
  };

  struct kitap teknikKitaplar[3]; // 3 kitaba ait bilgileri tutacagiz

  // 1. kitabin bilgilerini gir: teknikKitaplar[0]
  teknikKitaplar[0].kitapIsim="MultiSIM";
  teknikKitaplar[0].yazar="Abdurrahman Tasbasi";
  teknikKitaplar[0].yayinevi="Altas Basim Yayim Dagitim";
  teknikKitaplar[0].sayfaSayisi=266;
  teknikKitaplar[0].basimYili=2002;

  // 2. kitabin bilgilerini gir: teknikKitaplar[1]
  teknikKitaplar[1].kitapIsim="PIC Programlama";
  teknikKitaplar[1].yazar="Orhan Altinbasak";
  teknikKitaplar[1].yayinevi="Altas Basim Yayim Dagitim";
  teknikKitaplar[1].sayfaSayisi=283;
  teknikKitaplar[1].basimYili=2001;

  // 3. kitabin bilgilerini gir: teknikKitaplar[2]
  teknikKitaplar[2].kitapIsim="Visual Basic 6";
  teknikKitaplar[2].yazar="G. Murat Tasbasi";
  teknikKitaplar[2].yayinevi="Altas Basim Yayim Dagitim";
  teknikKitaplar[2].sayfaSayisi=322;
  teknikKitaplar[2].basimYili=2000;

  // kitaplarla ilgili bilgileri aldik, simdi bu bilgileri ekrana aktaralim:
  for(i=0;i<3;i++) {
    printf("%d. Kitap--------------\n",i+1);
    printf("Kitap Ismi: %s\n",teknikKitaplar[i].kitapIsim);
    printf("Yazar: %s\n",teknikKitaplar[i].yazar);
    printf("Yayinevi: %s\n",teknikKitaplar[i].yayinevi);
    printf("Sayfa Sayisi: %d\n",teknikKitaplar[i].sayfaSayisi);
    printf("Basim Yili: %d\n",teknikKitaplar[i].basimYili);
    putchar('\n');
  }

  return 0;
}
