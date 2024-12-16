// ucgen.c
// 20.03.2003
#include <stdio.h>

int main() {

    float kenar1, kenar2, kenar3;
    int gecerliUcgen, dikUcgen;
    int eskenarUcgen, ikizkenarUcgen, cesitkenarUcgen;

    printf("ucgenin 3 kenar olcusunu giriniz:");
    scanf("%f%f%f",&kenar1, &kenar2, &kenar3);

    // ucgenler burada tanimlaniyor.
    // sonuc olarak 1 veya 0 degerlerinden biri kullanýlýyor

    // gecerli ucgeni tanimla:
    gecerliUcgen = kenar1 < kenar2 + kenar3 &&
                   kenar2 < kenar1 + kenar3 &&
                   kenar3 < kenar1 + kenar2;

    // dik ucgeni tanimla:
    dikUcgen =
               kenar1*kenar1 == kenar2*kenar2 +
               kenar3*kenar3 ||
               kenar2*kenar2 == kenar1*kenar1 +
               kenar3*kenar3 ||
               kenar3*kenar3 == kenar1*kenar1 +
               kenar2*kenar2;

    // eskenar ucgeni tanimla:
    eskenarUcgen = kenar1==kenar2 && kenar1==kenar3;

    // ikizkenar ucgeni tanimla:
    ikizkenarUcgen = kenar1==kenar2 ||
                     kenar2==kenar3 ||
                     kenar1==kenar3;


    // once gecerli bir ucgen olup olmadigini bul:
    if (gecerliUcgen)
       printf("bu gecerli bir ucgendir.\n");
    else {
       printf("bu gecerli bir ucgen degildir!");
          scanf("%f",&kenar1);
       return 0;
    }

    // simdi ucgenin turune karar ver:
    if (dikUcgen) {
       printf("bu bir dik ucgendir.");
    } else {
         if(eskenarUcgen) {
            printf("bu bir eskenar ucgendir.");
         } else {
              if(ikizkenarUcgen)
                 printf("bu bir ikizkenar ucgendir.");
              else
                 printf("bu bir cesitkenar ucgendir.");
         }

    }

  return 0;
}
