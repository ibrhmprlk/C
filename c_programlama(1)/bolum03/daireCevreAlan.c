//daireCevreAlan.c
//08.03.2003

#include <stdio.h>

int main() {
  float r;  // dairenin alaný
  float PI = 3.1415; // PI sabiti
  int cevre;
  int alan;

  printf("dairenin yaricapini giriniz(cm):");
  scanf("%f",&r);

  // hesaplamalar:
  cevre = 2 * PI * r;
  alan = PI * r * r;

  // ekrana yazdir:
  printf("dairenin cevresi: %d cm\n", cevre);  // cevre
  printf("dairenin alani: %d cm2\n", alan);  // alan

  return 0;
}
