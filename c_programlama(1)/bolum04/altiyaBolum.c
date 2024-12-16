// altiyaBolum.c
// 20.03.2003

#include <stdio.h>

int main() {

  int sayi = 0;

  printf("bir sayi giriniz: ");
  scanf("%d",&sayi);

  if (sayi % 2 == 0 && sayi % 3 == 0) {
    printf("girdiginiz sayi 6 ya tam bolunur!\n",sayi);
  } else {
    printf("girdiginiz sayi 6 ya tam bolunemez!\n",sayi);
  }
  return 0;
}

