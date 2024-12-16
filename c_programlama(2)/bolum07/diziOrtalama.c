// diziOrtalama.c
// 14.04.2003

#include <stdio.h>

int main() {

  double ortalama=0;
  double sayilar[3];


  printf("3 sayi giriniz: ");
  scanf("%lf%lf%lf",&sayilar[0], &sayilar[1], &sayilar[2]);

  // sayilarin ortalamasini bul:
  ortalama = (sayilar[0] + sayilar[1] + sayilar[2]) / 3;

  // ortalama yazdir:
  printf("ortalama: %f\n", ortalama);

	return 0;
}

