// gostericiMatemetigi.c
// 13.05.2003

#include <stdio.h>

int main(){

  char c='e';
  int i=99;
  double d=0.44;

  char * cPt = &c;
  int * iPt = &i;
  double * dPt = &d;

  // ilk adresleri ekrana yazdir:
  printf("ilk adresler: \n\n");
  printf("c nin adresi: %X\tdegeri: %c\n",cPt,*cPt);
  printf("i nin adresi: %X\tdegeri: %d\n",iPt,*iPt);
  printf("d nin adresi: %X\tdegeri: %f\n\n\n",dPt,*dPt);

  // c nin degerini bir artir:
  cPt++;
  // i ye 3 ekle:
  iPt+=3;
  // d den 5 cikar:
  dPt -=5;

  // adresleri yeniden yazdir:
  printf("degisiklikten sonraki adresler: \n\n");
  printf("c nin adresi: %X\tdegeri: %c\n",cPt,*cPt);
  printf("i nin adresi: %X\tdegeri: %d\n",iPt,*iPt);
  printf("d nin adresi: %X\tdegeri: %f\n\n\n",dPt,*dPt);

  return 0;
}
