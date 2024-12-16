// harfleriCiftYaz.c
// 29.05.2003

#include <stdio.h>

void harfleriCiftYazdir(char *);

void harfleriCiftYazdir(char *chPt){

  int uzunluk=strlen(chPt);
  int i=0;

  for(i=0;i<uzunluk;i++){
    putchar(chPt[i]);
    putchar(chPt[i]);
  }
}

int main(){

  char chPt[20];

  puts("Bir kelime giriniz (max 20 karakter):");
  // kelimeyi diziye yerlestir:
  gets(chPt);

  // yazdir:
  harfleriCiftYazdir(chPt);
  return 0;
}

