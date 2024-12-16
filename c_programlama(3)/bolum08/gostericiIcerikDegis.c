// gostericiIcerikDegis.c
// 13.05.2003

#include <stdio.h>

int main(){

  char ch01='a';
  char ch02='b';

  char * cPt01=&ch01;
  char * cPt02=&ch02;
  char * temp;

  // ilk durumdaki degerleri ekrana yaz:
  printf("cPt01 gosterdigi deger: %c\n", *cPt01);
  printf("cPt02 gosterdigi deger: %c\n", *cPt02);

  // gostericilerin adreslerini birbiri ile degistir:
  printf("\ngostericilerin icerigi degisiyor...\n\n");
  temp = cPt01;
  cPt01 = cPt02;
  cPt02 = temp;

  // gostericilerin gosterdikleri degerleri ekrana yaz:
  printf("cPt01 gosterdigi deger: %c\n", *cPt01);
  printf("cPt02 gosterdigi deger: %c\n", *cPt02);

  return 0;
}
