// randFonksiyonu.c
// 02.04.2003

#include <stdio.h>
#include <stdlib.h>

int main() {

  int i=0;
  int rasgeleSayi=0;
  for(i=0;i<10;i++) {
    rasgeleSayi=rand();
    printf("%d. rasgele sayi: %d\n",i+1,rasgeleSayi);
  }
  return 0;
}

