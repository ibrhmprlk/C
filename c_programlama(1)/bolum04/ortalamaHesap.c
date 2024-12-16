// ortalamaHesap.c
// 20.03.2003
#include <stdio.h>

int main() {

    int notSayisi = 0;
    int aktifNot = 0;
    float toplam = 0;
    float ortalama = 0;

    yeniNotGir:

    printf("%d. notu giriniz: ",notSayisi + 1);
    scanf("%d",&aktifNot);

    if (aktifNot==-1) {
       ortalama = toplam / notSayisi;
       printf("\n%d notun ortalamasi: %f",notSayisi, ortalama);
       scanf("%d",&aktifNot);
       return 0;
    }

    notSayisi++; // not sayisini bir artir
    toplam += aktifNot;     // toplami artir

    goto yeniNotGir;

  return 0;
}

