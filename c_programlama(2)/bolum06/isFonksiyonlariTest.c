// isFonksiyonlariTest.c
// 02.04.2003

#include <stdio.h>
#include <ctype.h>

int main() {
  int i=0;

  // baslik olustur:
  printf("ascii\t");
  printf("karakter\t");
  printf("aciklama\n\n");

  for (i=0;i<=255;i++){
    // ascii kodu yaz:
    printf("%d\t",i);
    // karakteri yaz:
    printf("%c\t",i);

    // kontrol et ve aciklamalari yaz:
    if (isalpha(i)) printf("alfanumerik -");
    if (isdigit(i)) printf("sayi -");
    if (islower(i)) printf("kucuk harf -");
    if (isupper(i)) printf("buyuk harf -");
    if (isspace(i)) printf("bosluk -");
    if (ispunct(i)) printf("noktalama -");
    printf("\n");
  }
  return 0;
}

