// dizilerinFonksiyonlaraAktarilmasi.c
// 13.05.2003

#include <stdio.h>

void diziIsle(int *);

void diziIsle(int * tamsayilar){

  // dizideki degerlerin iki katini al ve yerlerine yaz:
  *tamsayilar= *tamsayilar * 2;
  *(tamsayilar+1)= *(tamsayilar+1) * 2;
  *(tamsayilar+2)= *(tamsayilar+2) * 2;
  *(tamsayilar+3)= *(tamsayilar+3) * 2;
  *(tamsayilar+4)= *(tamsayilar+4) * 2;
}


int main(){

  int sayilar[5]= {1,2,3,4,5};
  int i=0;
  // dizinin fonksiyona gitmeden onceki durumu:
  printf("dizinin fonksiyona gitmeden onceki durumu:\n");
  for(i=0;i<5;i++){
    printf("sayilar[%d]: %d\n",i, sayilar[i]);
  }

  // diziyi fonkiyona gonder:
  diziIsle(sayilar);

  // dizinin fonksiyona gittikten sonraki durumu:
  printf("dizinin fonksiyona gittikten sonraki durumu:\n");
  for(i=0;i<5;i++){
    printf("sayilar[%d]: %d\n",i, sayilar[i]);
  }

 return 0;
}

