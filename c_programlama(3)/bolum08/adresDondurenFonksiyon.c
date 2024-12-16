// adresDondurenFonksiyon.c
// 13.05.2003

#include <stdio.h>
#include <math.h>

float * kareKokAl(float *);

float * kareKokAl(float * fPt){
  *fPt = sqrt(*fPt);
  return fPt;
}

int main(){

  int c;
  float sayi=0;
  float * pt;

  printf("karekoku alinacak sayiyi giriniz: ");
  scanf("%f",&sayi);

  // fonksiyona gonder:
  pt = kareKokAl(&sayi);

  // sonucu yazdir:
  printf("karekoku: %f", *pt);

  return 0;
}
