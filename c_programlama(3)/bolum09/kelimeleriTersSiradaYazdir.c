// kelimeleriTersSiradaYazdir.c
// 29.05.2003

#include <stdio.h>

void kelimeleriTersSiradaYazdir(char *);

void kelimeleriTersSiradaYazdir(char *chPt){

  int uzunluk=strlen(chPt);
  int basla=uzunluk-1, bitir=uzunluk-1;
  int i=0,j=0;

  for(i=uzunluk;i>=0;i--){
    if(*(chPt+i)==' ' || i==0){ // bosluk karak. kadar bak

      // eger yazilan cumlenin ilk kelimesiyse (i==0),
      // basla = i, degilse basla = i + 1
      basla=(i!=0) ? i+1 : i;

      // bosluktan, kelime sonuna kadar kelimeyi yazdir
      for(j=basla;j<=bitir;j++){
        putchar(*(chPt+j));
      }

      bitir=basla-2;

      // bosluklari almamistik, simdi bir bosluk yerlestir:
      if (i!=0) putchar(' ');
    }
  }   // end for
}

int main(){

  char chPt[100];

  puts("Bir cumle giriniz (max 100 karakter):");
  // cumleyi diziye yerlestir:
  gets(chPt);

  // yazdir:
  kelimeleriTersSiradaYazdir(chPt);
  return 0;
}

