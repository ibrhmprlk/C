// sqrtFonksiyonu
// 02.04.2003

#include <stdio.h>
#include <math.h>

int main() {

    int i=0;

    printf("1..100 arasi sayilarin karekoku:\n\n");
    for(i=1;i<=100;i++) {
      printf("karekok %d: %f\n",i,sqrt(i));
    }
  return 0;
}

