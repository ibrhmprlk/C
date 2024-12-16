// sayiTahminOyunu.c
// 02.04.2003

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int tutulanSayi=0;
  int tahmin=0;
  int saniyeler=0;
  int kacTahmin=0;
  int puan=50;
  // sayi tut:

  saniyeler = time(NULL);

  srand(saniyeler);
  tutulanSayi=rand() % 100 + 1;  // 1..100 arasinda
  printf("1 ile 100 arasinda rasgele bir sayi tuttum!\n");
  printf("haydi, tahmine basla!!\n");

  while (tahmin!=-1) {
    printf("\ntahminin(1..100):");
    scanf("%d",&tahmin);

    if (tahmin==-1) break;
    if(tahmin<1 || tahmin>100) { // kontrol et
      printf("oyunbozanlik yok, 1 ile 100 arasinda bir sayi girmelisin!\n");
      continue;
    }

    kacTahmin++;

    if(tahmin==tutulanSayi) { // bildi!
      printf("tebrikler toplam %d seferde bildin!\n",kacTahmin);
      break;
    } else {
        if(tahmin>tutulanSayi) {
          printf("daha kucuk bir sayi girmelisin!\n");
          puan-=5;
        } else {
          printf("daha buyuk bir sayi girmelisin!\n");
          puan-=5;
        }
    } // if sonu

  } // while sonu

  printf("\noyunu oynadigin icin tesekkurler!\n");
  printf("puanin 50 uzerinden %d!",puan<0 ? 0: puan);

  return 0;
}

