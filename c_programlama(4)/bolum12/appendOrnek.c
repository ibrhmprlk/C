// appendOrnek.c
// 06.08.2003

#include <stdio.h>

int main(){

  FILE *ptDosya;

  // dosyayi ac:
  ptDosya=fopen("C:\\appendOrnek.txt","a");

  fputs("\nbu da ikinci satir!", ptDosya);

  // dosyayi kapat:
  fclose(ptDosya);

  return 0;
}


