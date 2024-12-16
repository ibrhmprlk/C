// yapilarinGostericilerleKullanimi.c
// 04.08.2003

#include <stdio.h>

struct futbolTakim {
  char * takimIsim;
  int kurulusYili;
  int oynadigiLig;
  int ligSirasi;
  int sampiyonlukSayisi;
};

int main(){

  struct futbolTakim a;
  struct futbolTakim *b;

  b=&a;

  (*b).takimIsim="besiktas";
  (*b).kurulusYili=1903;
  (*b).oynadigiLig=1;
  (*b).ligSirasi=1;
  (*b).sampiyonlukSayisi=11;

  // simdi bu bilgileri ekrana yazdiralim:

  printf("takim isim: %s\n",(*b).takimIsim);
  printf("kurulus yili: %d\n",(*b).kurulusYili);
  printf("oynadigi lig: %d\n",(*b).oynadigiLig);
  printf("lig sirasi: %d\n",(*b).ligSirasi);
  printf("sampiyonluk sayisi: %d\n",(*b).sampiyonlukSayisi);

  return 0;
}
