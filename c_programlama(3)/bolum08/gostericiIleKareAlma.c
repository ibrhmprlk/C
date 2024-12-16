// gostericiIleKareAlma.c
// 13.05.2003

#include <stdio.h>

double kareAl(double *dPt);

double kareAl(double * dPt){
  return *dPt * *dPt;
}

int main(){

  int c;
  double sonuc;
  double sayi;

  printf("bir sayi giriniz: ");
  scanf("%lf",&sayi);

  sonuc=kareAl(&sayi);
  printf("karesi : %f",sonuc);

  return 0;
}
