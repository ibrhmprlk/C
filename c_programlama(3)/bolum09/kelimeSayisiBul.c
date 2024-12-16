// kelimeSayisiBul.c
// 29.05.2003

#include <stdio.h>
int kelimeSayisiBul(char *);

int kelimeSayisiBul(char *chPt){

  int i=0;
  int kelimeSayisi=0;

  while(chPt[i]!='\0'){ // NULL karaktere kadar bak:
    // eger bosluk karakteri ise degiskeni bir artir
    if(chPt[i]==' ') kelimeSayisi++;
    i++;
  }
  // kelime sayisini dondur:
  return kelimeSayisi+1;
}

int main(){

  char chPt[100];
  int kelimeSayisi=0;

  puts("Bir cumle giriniz (max 100 karakter):");
  // cumleyi diziye yerlestir:
  gets(chPt);

  kelimeSayisi=kelimeSayisiBul(chPt);

  // sonucu ekrana yaz
  printf("Girdiginiz cumle %d kelimeden olusuyor." , kelimeSayisi);
  return 0;
}
