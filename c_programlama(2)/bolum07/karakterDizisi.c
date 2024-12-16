// karakterDizisi.c
// 02.04.2003

#include <stdio.h>

int main() {

  int i=0;
  char karakterler[256];


  for(i=0;i<256;i++) {
    karakterler[i]=i;
  }

  // dizideki karakterleri ekrana yaz:

  for(i=0;i<256;i++) {
    printf("%c ",karakterler[i]);
    if (i % 20 == 0) printf("\n");
  }
	return 0;
}

