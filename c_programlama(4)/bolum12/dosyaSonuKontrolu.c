// dosyaSonuKontrolu.c
// 06.08.2003

#include <stdio.h>

int main(){

  FILE *ptDosya;
  char ch;
  // dosyayi ac:
  ptDosya=fopen("C:\\getcOrnek.txt","r");

  // dosya sonuna gelene kadar tum bir karakterleri oku:
  do{
    ch=getc(ptDosya);
    // okunan karakteri ekrana yaz:
    printf("%c",ch);
  }while(ch!=EOF);

  printf("\n\ndosya sonuna gelindi, okuma islemi bitti!!");

  // dosyayi kapat:
  fclose(ptDosya);

  return 0;
}
