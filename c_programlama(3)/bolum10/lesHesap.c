// lesHesap.c
// 14.08.2003

#include <stdio.h>
#define LES_SOZ_KATSAYI 0.3
#define LES_SAY_KATSAYI 0.7


int main(){

  int sozelDCS, sayisalDCS;
  float sozTop, sayTop;

  printf("sozel dogru cevap sayisini giriniz(max 80):");
  scanf("%d", &sozelDCS);

  printf("sayisal dogru cevap sayisini giriniz(max 80):");
  scanf("%d", &sayisalDCS);

  sayTop= (sozelDCS * LES_SOZ_KATSAYI) + (sayisalDCS * LES_SAY_KATSAYI);
  sozTop= (sozelDCS * LES_SAY_KATSAYI) + (sayisalDCS * LES_SOZ_KATSAYI);


  printf("\nadayin yaklasik sozel puani: %5.2f\n", sozTop);
  printf("adayin yaklasik sayisal puani: %5.2f\n", sayTop);

  #undef LES_SOZ_KATSAYI

  sozTop= (sozelDCS * LES_SAY_KATSAYI) + (sayisalDCS * LES_SOZ_KATSAYI);

  return 0;
}

