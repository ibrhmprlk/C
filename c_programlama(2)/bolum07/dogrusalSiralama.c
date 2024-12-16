// dogrusalSiralama.c
// 14.04.2003

#include <stdio.h>

void sirala();
void diziyiYazdir();

int sayilar[15] = {102,97,34,65,324,21,546,2321,5,123,122121,7,13,675,0};

void sirala() {
  int i=0, j=0, yedek=0;
  for (i=0;i<15;i++) {
    for (j=i+1;j<15;j++) {
      if (sayilar[j]<sayilar[i]) {  // yer degistir:
        yedek=sayilar[i];
        sayilar[i]=sayilar[j];
        sayilar[j]=yedek;
      } // if sonu
    } // for j sonu
  } // for i sonu
}

void diziyiYazdir() {
  int i=0;
  for(i=0;i<15;i++) {
    printf("%d, ",sayilar[i]);
  }
  printf("\n");
}


int main() {

  int i=0;

  printf("dizi siralanmadan once:\n");
  diziyiYazdir();
  printf("\ndizi siralaniyor...\n");
  sirala();
  printf("\ndizi siralandiktan sonra:\n");
  diziyiYazdir();

	return 0;
}

