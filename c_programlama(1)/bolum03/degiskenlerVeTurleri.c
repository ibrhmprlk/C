// degiskenlerVeTurleri.c
// 08.03.2003

#include <stdio.h>

int main() {
  // degiskenlerimizi tanimlayalim:

  int tams = 7; // tamsayi
  unsigned int uTams = 55000; //isaretsiz tamsayi

  short kisaTams = 30000; //kisa tamsayi
  unsigned short uKisaTams=60000; //isaretsiz kisa tams.

  long uzunTams = 398162092; //uzun tamsayi
  unsigned long uUzunTams=4047483649; //isaretsiz uzun t.

  char karakter = 125;	//karakter
  unsigned char uKarakter = 252;	//isaretsiz karakter

  double realDouble = 97223.787844;	//ond. gercek sayi
  float realFloat = 223.52; // ondalikli gercek sayi

  // degiskenlerimiz yazdiralim:

  printf("tamsayi: %d \n", tams);
  printf("isaretsiz tamsayi: %d \n", uTams);

  printf("kisa tamsayi: %d \n", kisaTams);
  printf("isar. kisa tamsayi: %d \n", uKisaTams);

  printf("uzun tamsayi: %ld \n", uzunTams);
  printf("isar. uzun tamsayi: %u \n", uUzunTams);

  printf("karakter: %d \n", karakter);
  printf("isar. karakter: %d \n", uKarakter);

  printf("double: %f \n", realDouble);
  printf("float: %f \n", realFloat);

  return 0;
}
