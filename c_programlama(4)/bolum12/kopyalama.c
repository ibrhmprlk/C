// kopyalama.c
// 06.08.2003

#include <stdio.h>

int main(){

  FILE *ptDosyaOrjinal, *ptDosyaKopya;

  // orjinal dosyayi ac:
  if((ptDosyaOrjinal=fopen("C:\\orjinal.txt","r"))==NULL){
    printf("orjinal dosya acilamadi!");
    return 0;
  }

  // kopya dosyayi olustur:
  if((ptDosyaKopya=fopen("C:\\kopyaDosya.txt","w"))==NULL){
    printf("kopya dosya acilamadi!");
    return 0;
  }

  // simdi eof kontrol ederek karakterleri tek tek kopyala
  while(!feof(ptDosyaOrjinal)){
    putc(getc(ptDosyaOrjinal), ptDosyaKopya);
  }

  // geri bildirim:
  printf("dosya kopyalandi. yeni dosya: kopyaDosya.txt");

  // dosyalari kapat:
  fclose(ptDosyaOrjinal);
  fclose(ptDosyaKopya);

  return 0;
}

