// fonksiyonDeneme.c
// 02.04.2003

#include <stdio.h>

int topla(int a, int b) {
  int c=0;
  c=a+b;
  return c;
}

int main() {
  int toplam=0;
  toplam = topla(3,4);
  printf("%d",toplam);
  return 0;
}
