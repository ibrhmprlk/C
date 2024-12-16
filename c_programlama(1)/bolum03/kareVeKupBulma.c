//kareVeKupBulma.c
//08.03.2003

#include <stdio.h>

int main() {

 float sayi1= 0.0;
 float sayi2= 0.0;
 float sayi3= 0.0;

 printf("3 sayi giriniz:");
 scanf("%f %f %f",&sayi1,&sayi2,&sayi3);

 // karelerini ve kuplerini ekrana yaz:

 printf("sayi\t\t");
 printf("karesi\t\t");
 printf("kupwu\t\t\n");
 printf("------\t\t");
 printf("------\t\t");
 printf("------\t\t\n");

 printf("%f\t\t", sayi1);
 printf("%f\t\t", sayi1 * sayi1);
 printf("%f\n", sayi1 * sayi1 * sayi1);

 printf("%f\t\t", sayi2);
 printf("%f\t\t", sayi2 * sayi2);
 printf("%f\t\t\n", sayi2 * sayi2 * sayi2);

 printf("%f\t\t", sayi3);
 printf("%f\t\t", sayi3 * sayi3);
 printf("%f\n", sayi3 * sayi3 * sayi3);

 return 0;
}
