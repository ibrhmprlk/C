// asalSayiBul.c
// 21.03.2003

#include <stdio.h>

int main() {

  int sayi = 0;
  int index=2;
  printf("test edilecek pozitif bir sayi giriniz:");
  scanf("%d",&sayi);

  if(sayi<0) {
    printf("pozitif bir sayi girmelisiniz!");
    return 0;
  }

  while(index < sayi / 2) {
    if (sayi % index == 0) { // bu durumda sayi asal olamaz
      printf("%d, %d sayisina bolunebildigi icin asal sayi degildir!",sayi, index);
      scanf("%d",&sayi);
      return 0;
    }
    index++;
  }
  // donguden cikabildiyse asal sayidir:
  printf("%d bir asal sayidir!", sayi);

  return 0;
}

