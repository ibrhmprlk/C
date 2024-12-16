// okekObebBul.c
// 13.05.2003

#include <stdio.h>

int okekBul(int *, int *);
int obebBul(int *, int *, int *);

int okekBul(int *iPt01, int *iPt02){

    int buyukSayi=0, okek=0;

    // once verilen sayilardan hangisi daha buyuk onu bul:
    if (*iPt01>*iPt02) buyukSayi = *iPt01; else buyukSayi = *iPt02;

    okek=buyukSayi;

    // en kucuk ortak kati bul:
    while(okek % *iPt01 !=0 || okek % *iPt02 !=0){
        okek +=buyukSayi;
    }

    // okek'i dondur:
    return okek;
}

int obebBul(int *iPt01, int *iPt02, int *okekPt){
  return (*iPt01 * *iPt02) / *okekPt;
}

int main(){
 int i=0;
 int sayi01=0; int sayi02=0;
 int okek=0, obeb=0;

 // sayilari al:
 printf("iki tamsayi giriniz: ");
 scanf("%d%d",&sayi01, &sayi02);

 // okek bul:
 okek = okekBul(&sayi01, &sayi02);
 printf("\nokek: %d\n", okek);

 // obeb bul:
 obeb = obebBul(&sayi01, &sayi02, &okek);
 printf("obeb: %d", obeb);

 return 0;
}
