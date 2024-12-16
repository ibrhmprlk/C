// buyukKucukHarfDonustur.c
// 13.05.2003

#include <stdio.h>

void buyukKucukHarfDonustur(char *, int);

void buyukKucukHarfDonustur(char *chDizi, int diziBoyu){

  int i=0;

  for(i=0;i<diziBoyu;i++){
    if (chDizi[i]>='a' && chDizi[i]<='z') {
      chDizi[i] = chDizi[i] - 32;
    }
    else {
      if (chDizi[i]>='A' && chDizi[i]<='Z')
        chDizi[i] = chDizi[i] + 32;
    }
  }
}


int main(){

  char dizi[]={'f','i','R','a','T',' ','s','O','Y','l','U'};
  int boy=11,i=0;

  // dizinin simdiki durumu:
  for(i=0;i<11;i++){
    printf("%c",dizi[i]);
  }

  printf("\n");

  // diziyi fonksyiona gonder:
  buyukKucukHarfDonustur(dizi,i);

  // dizinin son durumu:
  for(i=0;i<11;i++){
    printf("%c",dizi[i]);
  }
  printf("\n");
  return 0;
}
