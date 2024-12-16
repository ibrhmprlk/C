// satisTemsilcisi.c
// 20.03.2003
#include <stdio.h>

int main() {

   int urunSayisi = 0;
   int gun = 0;
   char *gunIsmi;
   printf("haftanin gununu giriniz (1 - 7):");
   scanf("%d",&gun);

   // girilen bilgiyi kontrol et
   if (gun<1 ||gun > 7) {
      printf("lutfen 1 - 7 arasinda bir sayi giriniz!");
      return 0;
   }

   switch(gun) {
	case 7:
        urunSayisi += 20;
        if (gun==7) gunIsmi = "pazar";
    case 6:
        urunSayisi += 15;
        if (gun==6) gunIsmi = "cumartesi";
	case 5:
        urunSayisi += 10;
        if (gun==5) gunIsmi = "cuma";
	case 4:
        urunSayisi += 7;
        if (gun==4) gunIsmi = "persembe";
	case 3:
        urunSayisi += 7;
        if (gun==3) gunIsmi = "carsamba";
	case 2:
        urunSayisi += 5;
        if (gun==2) gunIsmi = "sali";
	case 1:
        urunSayisi += 5;
        if (gun==1) gunIsmi = "pazartesi";

   }  // switch sonu

   // sonucu ekrana yaz:
   printf("%s gunu sonunda toplam %d urun satisi yapildi!",gunIsmi,urunSayisi);

  return 0;
}
