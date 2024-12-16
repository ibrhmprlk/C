// icerikOperatoruKullanimi2.c
// 13.05.2003

#include <stdio.h>

int main(){

  double a = 14.4;

  // gostericileri tanimla:
  double * g01= &a;
  double * g02= &a;

  // gostericilerin gosterdigi degerleri ekrana yazdir:
  printf("g01: %f\n",*g01);
  printf("g02: %f\n\n",*g02);

  *g01= 31.212;

  printf("g02: %f\n",*g02);

  return 0;
}
