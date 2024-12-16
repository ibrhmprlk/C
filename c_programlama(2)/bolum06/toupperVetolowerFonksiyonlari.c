// toupperVetolowerFonksiyonlari.c
// 02.04.2003

#include <stdio.h>
#include <ctype.h>

int main() {
  int i=0;
  char karakter=0;

  printf("bir karakter giriniz: ");
  scanf("%c",&karakter);

  printf("\nkucuk: %c\n",tolower(karakter));
  printf("buyuk: %c",toupper(karakter));

  return 0;
}

