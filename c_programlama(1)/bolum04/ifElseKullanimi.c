// ifElseKullanimi.c
// 20.03.2003

#include <stdio.h>

int main() {

    double sayi = 0.0;

    printf("bir sayi giriniz: ");
    scanf("%lf",&sayi);

    if (sayi>0) {
       printf("girdiginiz sayi: %f\n",sayi);
       printf("bu sayi pozitiftir!\n");
    } else {
       printf("girdiginiz sayi: %f\n",sayi);
       printf("bu sayi negatiftir!\n");
    }

   return 0;
}

