// terstenYazdir.c
// 29.05.2003

#include <stdio.h>
#include <string.h>

void terstenYazdir(char *);

void terstenYazdir(char *chPt){

  int i=0, uzunluk=0;
  // once stringin uzunlugunu bul:
  uzunluk=strlen(chPt);

  // simdi stringi sondan baslayarak basa kadar tara
  // ve okunan karakterleri ekrana yaz:

  for(i=uzunluk-1;i>=0;i--){
    putchar(*(chPt+i));
  }

}

int main(){

  char chPt[100];

  puts("Bir cumle giriniz (max 100 karakter):");
  // cumleyi diziye yerlestir:
  gets(chPt);

  // tersten yazdir:
  terstenYazdir(chPt);

  return 0;
}
