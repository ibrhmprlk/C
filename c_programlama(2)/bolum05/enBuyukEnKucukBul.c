// enBuyukEnKucukBul.c
// 30.03.2003

#include <stdio.h>

int main() {

  int i=1;              // dongu sayaci
  int aktifSayi=0;
  int enKucuk=2147483646;   // en kucuk sayi tutulacak
  int enBuyuk=-2147483647;  // en buyuk sayi tutulacak

  // sayilari oku:
  do {
    printf("%d. sayi:",i);
    scanf("%d",&aktifSayi);

    if (aktifSayi==-1) break; // sayi girisi bitti
    if(aktifSayi<enKucuk) enKucuk=aktifSayi;
    if(aktifSayi>enBuyuk) enBuyuk=aktifSayi;

    i++;
  } while (aktifSayi!=-1);

  // en buyuk ve en kucugu yazdir:
  printf("\n\nen buyuk: %d\n",enBuyuk);
  printf("en kucuk: %d",enKucuk);

  return 0;
}

