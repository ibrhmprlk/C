// dosyaAcYazKapat2.c
// 06.08.2003

#include <stdio.h>

int main(){

  FILE *ptDosya;
  // dosyayi ac:
  ptDosya=fopen("C:\\ornek06082003.txt", "w");

  // karakteri yazdir:
  putc('A', ptDosya);

  // dosyayi kapat:
  fclose(ptDosya);

  return 0;
}
