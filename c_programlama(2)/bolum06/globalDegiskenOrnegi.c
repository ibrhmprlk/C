// globalDegiskenOrnegi.c
// 02.04.2003

#include <stdio.h>

int a=13;

void birArtir();
void birAzalt();

void birArtir() {
  a++;
}

void birAzalt() {
  a--;
}

int main() {

  printf("global degiskenin ilk degeri: %d\n\n",a);

  printf("degeri bir artir...\n");
  birArtir();
  printf("global degiskenin degeri: %d\n\n",a);

  printf("degeri iki azalt...\n");
  birAzalt();
  birAzalt();
  printf("global degiskenin degeri: %d\n",a);

  return 0;
}

