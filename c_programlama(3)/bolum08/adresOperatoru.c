// adresOperatoru.c
// 13.05.2003

#include <stdio.h>
int main(){

  int a=45;
  double b=4.5;
  char c='g';

  // degiskenlerin iceriklerini ekrana yaz:
  printf("a degiskenin icerigi: %d\n", a);
  printf("b degiskenin icerigi: %f\n", b);
  printf("c degiskenin icerigi: %c\n\n", c);

  // simdi adreslerini yaz:
  printf("a degiskenin bellekteki adresi: %X\n", &a);
  printf("b degiskenin bellekteki adresi: %X\n", &b);
  printf("c degiskenin bellekteki adresi: %X\n\n", &c);

  return 0;
}
