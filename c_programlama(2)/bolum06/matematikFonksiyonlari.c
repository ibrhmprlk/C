// matematikFonksiyonlari.c
// 02.04.2003

#include <stdio.h>
#include "MathFonks.h"

int main() {
  int i=0;
  int j=0;
  int secim=0;

  // menu ciz:
  menu();

  printf("\nseciminizi yapiniz (1..5): ");
  scanf("%d",&secim);
  printf("\n");

  switch(secim) {
    case 1:
      printf("iki sayi giriniz: ");
      scanf("%d%d",&i,&j);
      printf("min: %d",min(i,j));
      break;
    case 2:
      printf("iki sayi giriniz: ");
      scanf("%d%d",&i,&j);
      printf("max: %d",max(i,j));
      break;
    case 3:
      printf("bir sayi giriniz: ");
      scanf("%d",&i);
      printf("karesi: %d",kare(i));
      break;
    case 4:
      printf("bir sayi giriniz: ");
      scanf("%d",&i);
      printf("kupu: %d",kup(i));
      break;
    case 5:
      printf("bir sayi giriniz: ");
      scanf("%d",&i);
      printf("mutlak degeri: %d",mutlak(i));
      break;
    default:
      printf("1..5 arasinda bir deger girmelisiniz!");
  }

  return 0;
}

void menu() {
  printf("\n");
  printf("******************\n");
  printf("*     M E N U    *\n");
  printf("******************\n");

  printf("\n\n");

  printf("1. minimum bul\n");
  printf("2. maksimum bul\n");
  printf("3. kare bul\n");
  printf("4. kup bul\n");
  printf("5. mutlak deger bul\n");
}
    
int min(int a, int b) {
  if (a<b) {
    return a;
  }
  return b;
}

int max(int a, int b) {
  if (a>b) {
    return a;
  }
  return b;
}

int kare(int a) {
  return a * a;
}

int kup(int a) {
  return a * a * a;
}

int mutlak(int a) {
  if (a<0) {
    return a * (-1);
  }
  return a;
}


