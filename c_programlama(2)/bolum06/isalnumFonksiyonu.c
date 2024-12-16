// isalnumFonksiyonu.c
// 02.04.2003

#include <stdio.h>
#include <ctype.h>

int main() {
  int sayi=0;
  printf("0..255 araliginda bir sayi giriniz: ");
  scanf("%d",&sayi);
  printf("\n\ngirdiginiz karakter: %c\n",sayi);
  if(isalnum(sayi)) {
    printf("bu karakter A..Z, a..z veya 0..9 karakterlerinden birisidir!");
  } else {
    printf("bu karakter A..Z, a..z veya 0..9 karakterlerinden biri degildir!");
  }

  return 0;
}

