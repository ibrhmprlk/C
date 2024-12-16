// zarIstatistik.c
// 02.04.2003

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int zar=0;
  int i=0;
  int zarKacDefa[7] = {0,0,0,0,0,0,0};

  srand(time(NULL));

  for(i=0;i<1000;i++) {
    // 1-6 arasi bir sayi uret:
    zar = rand() % 6 + 1;
    zarKacDefa[zar]++;
  }
  // sonuclari ekrana yaz:
  printf("zar\tkac defa\n\n");

  for(i=1;i<7;i++) {
    printf("%d\t",i);
    printf("%d\n",zarKacDefa[i]);
  }

	return 0;
}

