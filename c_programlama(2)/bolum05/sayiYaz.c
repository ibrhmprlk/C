// sayiYaz.c
// 21.03.2003

#include <stdio.h>

int main() {

  int sayi=0;
  int index=0;
  printf("bir sayi giriniz:");
  scanf("%d",&sayi);


  do {
    index++;
    printf("%d ",index);
  }while(index < sayi);

  return 0;
}

