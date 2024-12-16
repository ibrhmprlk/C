// gandalfVeSaruman.c
// 14.04.2003

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void enerjileriYazdir();
void gandalfSaldir();
void sarumanSaldir();

int oran=0;
int buyuNo=0;

int sarumanEnerji=100;                // baslasngic enerjisi
int sarumanOranlar[3] = {45, 40, 15}; // buyu ihtimalleri
int sarumanBuyuler[3] = {5, 7, 13};   // buyunun etkileri

int gandalfEnerji=100;                // baslasngic enerjisi
int gandalfOranlar[3] = {45, 20, 35}; // buyu ihtimalleri
int gandalfBuyuler[3] = {3, 9, 10};   // buyunun etkileri

void enerjileriYazdir() {
  printf("gandalf: %d   saruman: %d",gandalfEnerji,sarumanEnerji);
}

void gandalfSaldir() {
  // 1-100 arasi bir sayi uret:
  oran = rand() % 100 + 1;
  if (oran<=gandalfOranlar[0]) {
    printf("gandalf \"su\" buyusu yapti!\n"); // buyuyu ekrana yaz
    buyuNo = 0;
  } else
    if (oran>gandalfOranlar[0] && oran<=gandalfOranlar[0]+gandalfOranlar[1]) {
      printf("gandalf \"toprak\" buyusu yapti!\n");
      buyuNo = 1;
    } else {
      printf("gandalf \"iyi ruh\" buyusu yapti!\n");
      buyuNo = 2;
    }

  // etkiyi sarumanin enerjisinden dus:
  sarumanEnerji -=gandalfBuyuler[buyuNo];
  enerjileriYazdir(); // yeni enerjileri ekrana yaz
}


void sarumanSaldir() {
  // 1-100 arasi bir sayi uret:
  oran = rand() % 100 + 1;
  if (oran<=sarumanOranlar[0]) {
    printf("saruman \"isik\" buyusu yapti!\n"); // buyuyu ekrana yaz
    buyuNo = 0;
  } else
    if (oran>sarumanOranlar[0] && oran<=sarumanOranlar[0]+sarumanOranlar[1]) {
      printf("saruman \"ates\" buyusu yapti!\n");
      buyuNo = 1;
    } else {
      printf("saruman \"kotu ruh\" buyusu yapti!\n");
      buyuNo = 2;
    }
  // etkiyi gandalfin enerjisinden dus:
  gandalfEnerji -=sarumanBuyuler[buyuNo];
  enerjileriYazdir(); // yeni enerjileri ekrana yaz
}

int main() {

  int i=0;
  srand(time(NULL));

  printf("mucadele basliyor!!!\n\n");
  // mucadele baslasin!
  do {
    gandalfSaldir();
    printf("\n\n");
    sarumanSaldir();
    printf("\n\n");
  }while (gandalfEnerji>0 && sarumanEnerji>0);

  // mucadele bitti, enerjileri ve kazanani ekrana yaz:
  printf("\n\nmucadele bitti!\n\n");
  enerjileriYazdir();
  printf("\nsonuc: ");

  if (gandalfEnerji<=0 && sarumanEnerji<=0) {
    printf("berabere!");
  } else {
    if (gandalfEnerji>0) {
      printf("gandalf kazandi! yasasin iyiler!");
    } else {
      printf("saruman kazandi! yasasin kotuler!");
    }
  }
	return 0;
}

