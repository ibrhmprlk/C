// gostericiDegiskeniOrnegi
// 13.05.2003

#include <stdio.h>
int main(){

  char c='e';
  char *g=&c;

  // c degiskenin adresini & ile ekrana yazdir:
  printf("c degiskeninin adresi: %X \n",&c);

  // c degiskenin adresini gosterici ile ekrana yazdir:
  printf("c degiskeninin adresi: %X \n",g);

  return 0;
}
