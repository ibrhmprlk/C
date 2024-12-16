// sayisalLoto.c
// 02.04.2003

#include <stdio.h>
#include <stdlib.h>

int main() {

  int i=1;

  int sayi1=0;
  int sayi2=0;
  int sayi3=0;
  int sayi4=0;
  int sayi5=0;
  int sayi6=0;
  int rasgeleSayi=0;

  while(i<=6) {
    rasgeleSayi=(rand() % 49) + 1;
    if (rasgeleSayi!=sayi1 && rasgeleSayi!=sayi2 && rasgeleSayi!=sayi3 &&
        rasgeleSayi!=sayi4 && rasgeleSayi!=sayi5 && rasgeleSayi!=sayi6) {
      switch (i) {
        case 1: sayi1=rasgeleSayi; break;
        case 2: sayi2=rasgeleSayi; break;
        case 3: sayi3=rasgeleSayi; break;
        case 4: sayi4=rasgeleSayi; break;
        case 5: sayi5=rasgeleSayi; break;
        case 6: sayi6=rasgeleSayi; break;
      } // switch end
    } else {
      continue; // bu sayi var, tekrar dene.
    }   // if end

    i++;
  }

  // uretilen sayilari ekrana yazdir:
  printf("iste sayilariniz, bol sans!\n\n");
  printf("1. sayi: %d\n",sayi1);
  printf("2. sayi: %d\n",sayi2);
  printf("3. sayi: %d\n",sayi3);
  printf("4. sayi: %d\n",sayi4);
  printf("5. sayi: %d\n",sayi5);
  printf("6. sayi: %d\n",sayi6);

  return 0;
}

