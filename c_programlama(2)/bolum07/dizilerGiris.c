// dizilerGiris.c.c
// 14.04.2003

#include <stdio.h>

int main() {

  int toplam=0;
  int notlar[5];

  notlar[0]=7;
  notlar[1]=9;
  notlar[2]=13;
  notlar[3]=122;
  notlar[4]=98;

  printf("0. index degeri: %d\n", notlar[0]);
  printf("1. index degeri: %d\n", notlar[1]);
  printf("2. index degeri: %d\n", notlar[2]);
  printf("3. index degeri: %d\n", notlar[3]);
  printf("4. index degeri: %d\n", notlar[4]);

  // 0. ve 2. indexteki degerleri toplayalim:
  toplam = notlar[0] + notlar[2];

  // toplami yazdir:
  printf("\ntoplam: %d\n", toplam);

	return 0;
}

