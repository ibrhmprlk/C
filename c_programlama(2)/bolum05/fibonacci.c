// fibonacci.c
// 30.03.2003

#include <stdio.h>

int main() {

  int i=1; // dongu sayaci
  int bulunacakElemanSira=1;

  long aktifEleman2Once=0;
  long aktifEleman1Once=1;
  long aktifEleman=1;

  printf("kacinci eleman bulunacak: ");
  scanf("%d",&bulunacakElemanSira);

  for(i=1;i<=bulunacakElemanSira;i++) {
    aktifEleman2Once = aktifEleman1Once;
    aktifEleman1Once = aktifEleman;
    aktifEleman = aktifEleman2Once + aktifEleman1Once;
  }

  // en buyuk ve en kucugu yazdir:
  printf("%d. eleman: %ld",i-1,aktifEleman2Once);

  return 0;
}

