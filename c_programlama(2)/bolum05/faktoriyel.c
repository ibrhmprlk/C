// faktoriyel.c
// 30.03.2003

#include <stdio.h>

int main() {

  int i=1;              // dongu sayaci
  int sayi;             // faktoriyeli alinacak sayi
  double faktoriyel=1;  // faktoriyel

  printf("faktoriyeli bulunacak sayiyi giriniz:");
  scanf("%d",&sayi);

  for (i=sayi;i>1;i--) {
    faktoriyel = faktoriyel * i;
  }

  printf("%d! = %f",sayi, faktoriyel);

  return 0;
}

