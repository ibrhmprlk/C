// stringinUzunlugunuBul2.c
// 29.05.2003

#include <stdio.h>
int uzunlukBul(char *);

int uzunlukBul(char *chPt){

  int i=0;
  while(chPt[i]!='\0'){ // NULL karaktere kadar bak:
    i++;
  }
  // uzunlugu dondur:
  return i;
}

int main(){

  char chPt[50];
  int uzunluk=0;

  puts("Bir cumle giriniz (max 50 karakter):");
  // cumleyi diziye yerlestir:
  gets(chPt);

  uzunluk=uzunlukBul(chPt);

  // uzunlugu ekrana yaz
  printf("girdiginiz cumlenin uzunlugu: %d", uzunluk);
  return 0;
}
