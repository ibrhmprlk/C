// ikiSayiyiKarsilastir.c
// 20.03.2003

#include <stdio.h>

int main() {

  int sayi1 = 0;
  int sayi2 = 0;

  printf("aralarina virgul koyarak iki sayi giriniz: ");
  scanf("%d,%d",&sayi1, &sayi2);

  if (sayi1 > sayi2) {
    printf("ilk sayi daha buyuktur!\n");
  } else {
    if (sayi2 > sayi1)
       printf("ikinci sayi daha buyuktur!\n");
    else
        printf("girdiginiz sayilar esittir!\n");
  }

  return 0;
}

