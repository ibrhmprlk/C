// ceilVeFloorFonksiyonlari.c
// 02.04.2003

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  double sayi=0;
  printf("durdurmak icin -1 giriniz...\n\n");
  do{
    printf("bir sayi giriniz: ");
    scanf("%lf",&sayi);
    printf("ceil(): \t%f \n",ceil(sayi));
    printf("floor():\t%f \n\n",floor(sayi));
  }while(sayi!=-1);
  return 0;
}

