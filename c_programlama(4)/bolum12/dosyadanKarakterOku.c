// dosyadanKarakterOku.c
// 06.08.2003

#include <stdio.h>

int main(){

  FILE *ptDosya;
  char ch;
  // dosyayi ac:
  ptDosya=fopen("C:\\getcOrnek.txt","r");

  // bir karakter oku:
  ch=getc(ptDosya);

  // okunan karakteri ekrana yaz:
  printf("dosyadan okunan karakter: %c",ch);

  // dosyayi kapat:
  fclose(ptDosya);

  return 0;
}
