// notOrtalamasi.c
// 30.03.2003

#include <stdio.h>

int main() {

  int i=1;              // dongu sayaci
  float aktifNot=0.0;   // o anda girilen not
  float toplamNot=0.0;  // girilen notlarin toplami

  // notlari oku:
  do {
    printf("%d. not:",i);
    scanf("%f",&aktifNot);
    if (aktifNot==-1) break; // not girisi bitti

    if(aktifNot<0){
      printf("pozitif bir sayi giriniz!\n");
      continue;
    }
    else {
      toplamNot+=aktifNot;
    }

    i++; // sayaci unutma
  } while (aktifNot!=-1);

  // ortalama hesapla:
  printf("\n%d not girdiniz. \nOrtalamasi: %f",i-1,toplamNot/(i-1));

  return 0;
}

