// kucukBuyukHarfCevir.c
// 29.05.2003

#include <stdio.h>
void harfCevir(char *);

void harfCevir(char *chPt){

  for(;*chPt!='\0';chPt++){
    if (*chPt>='a' && *chPt<='z')
      putchar(*chPt-32);
    else
      if(*chPt>='A' && *chPt<='Z')
        putchar(*chPt+32);
      else
        putchar(*chPt);
  }
}

int main(){

  char chPt[100];

  puts("Bir cumle giriniz (max 100 karakter):");
  // cumleyi diziye yerlestir:
  gets(chPt);

  // harfleri cevir:
  harfCevir(chPt);

  return 0;
}
