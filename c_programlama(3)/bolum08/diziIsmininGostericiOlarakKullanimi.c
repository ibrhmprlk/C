// diziIsmininGostericiOlarakKullanimi.c
// 13.05.2003

#include <stdio.h>

int main(){

  // diziyi tanimla:
  char karakterler[8]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

  // bazi elemanlarin adreslerini yazdir:
  printf("ilk elemanin adresi: %X \n",&karakterler[0]);
  printf("ilk elemanin adresi: %X \n\n",karakterler);

  printf("son elemanin adresi: %X \n",&karakterler[7]);
  printf("son elemanin adresi: %X \n\n",karakterler + 7);

  // bazi elemanlarin iceriklerini yazdir:
  printf("ilk elemanin icerigi: %c \n",karakterler[0]);         // g
  printf("ilk elemanin icerigi: %c \n\n",*karakterler);         // g

  printf("3. elemanin icerigi: %c \n",karakterler[2]);          // a
  printf("3. elemanin icerigi: %c \n",*(karakterler + 2));      // a
  printf("6. elemanin icerigi: %c \n\n",*(karakterler + 6));    // s

  return 0;
}
