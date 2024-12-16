// adresOlarakDiziIsmi.c
// 13.05.2003

#include <stdio.h>

int main(){

  char karakterler[8];

  // adresleri yazdiralim:
  printf("ilk elemanin adresi: \t%X\n", &karakterler[0]);
  printf("dizinin ismi \t%X\n", karakterler);

  return 0;
}
