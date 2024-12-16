// yapiGostericilerininFonkAktarimi.c
// 04.08.2003

#include <stdio.h>

struct futbolTakim {
    char * takimIsim;
    int kurulusYili;
    int oynadigiLig;
    int ligSirasi;
    int sampiyonlukSayisi;
  };

void yazdir(struct futbolTakim *);

void yazdir(struct futbolTakim *pt){

  // ekrana yazdir:
  printf("takim isim: %s\n",(*pt).takimIsim);
  printf("kurulus yili: %d\n",(*pt).kurulusYili);
  printf("oynadigi lig: %d\n",(*pt).oynadigiLig);
  printf("lig sirasi: %d\n",(*pt).ligSirasi);
  printf("sampiyonluk sayisi: %d\n",(*pt).sampiyonlukSayisi);
}

int main(){

  struct futbolTakim a;
  struct futbolTakim *b;

  b=&a;

  // once bilgileri gir:
  (*b).takimIsim="besiktas";
  (*b).kurulusYili=1903;
  (*b).oynadigiLig=1;
  (*b).ligSirasi=1;
  (*b).sampiyonlukSayisi=11;

  // bilgileri ekrana yazdiralim:
  yazdir(b);

  system("pause");
  return 0;
}
