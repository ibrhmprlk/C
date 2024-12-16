// swapUygulamasi.c
// 13.05.2003

#include <stdio.h>

void * swap(int *, int *);

void * swap(int * iPt01, int * iPt02){
     int temp=0;
     temp = *iPt01;
     *iPt01 = *iPt02;
     *iPt02 = temp;
}

int main() {

 int i=0;
 int sayi01=0, sayi02=0;

 // kullanicidan iki tamsayi al:
 printf("iki tamsayi degeri giriniz: ");
 scanf("%d%d",&sayi01, &sayi02);

 // fonksiyona gondermeden once bu sayilarin iceriklerini yazdir:
 printf("sayi01: %d\n",sayi01);
 printf("sayi02: %d\n\n",sayi02);

 // sayilari fonksiyona gonder:
 swap(&sayi01, &sayi02);

 // simdi degerleri tekrar yazdir:
 printf("sayi01: %d\n",sayi01);
 printf("sayi02: %d\n\n",sayi02);

 return 0;
}
