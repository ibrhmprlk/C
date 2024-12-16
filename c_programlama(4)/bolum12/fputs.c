// fputs.c
// 06.08.2003

#include <stdio.h>

int main(){

  FILE *ptDosya;
  char *veri01;
  char *veri02;

  // dosyayi ac:
  ptDosya=fopen("C:\\fputsOrnek.txt","w");

  veri01 = "bilisim ";
  veri02 = "teknolojileri";

  fputs(veri01, ptDosya);
  printf("%d",fputs(veri02, ptDosya));


  // dosyayi kapat:
  fclose(ptDosya);

  return 0;
}


