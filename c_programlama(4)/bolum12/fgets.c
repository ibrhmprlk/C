// fgets.c
// 06.08.2003

#include <stdio.h>

int main(){

  FILE *ptDosya;
  char *veri;

  // dosyayi ac:
  ptDosya=fopen("C:\\fgetsOrnek.txt","r");

  fgets(veri, 36, ptDosya);
  puts(veri);

  // dosyayi kapat:
  fclose(ptDosya);

  return 0;
}
