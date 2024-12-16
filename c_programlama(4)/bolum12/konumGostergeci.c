// konumGostergeci.c
// 06.08.2003

#include <stdio.h>

int main(){

  FILE *ptDosya;
  char satir[200];

  // dosyayi ac:
  if((ptDosya=fopen("C:\\konumGostergecOrnek.txt","r"))==NULL){
    printf("dosya acilamadi!");
    return 0;
  }

  // konum gostergecinin ilk yeri:
  printf("konum gostergecinin yeri: %d\n\n", ftell(ptDosya));

  // bir karakter oku:
  printf("bir karakter okunuyor...\n");
  fgetc(ptDosya);

  // konum gostergecinin simdiki yeri:
  printf("konum gostergecinin yeri: %d\n\n", ftell(ptDosya));

  // konum gostergecini ikinci satirin basina gonder:
  printf("konumu ikinci satirin basina gotur:\n");
  fseek(ptDosya, 40, SEEK_SET);

  // konum gostergecinin simdiki yeri:
  printf("konum gostergecinin yeri: %d\n\n", ftell(ptDosya));

  printf("bu satiri oku ve ekrana yazdir:\n");
  fgets(satir, 200, ptDosya);
  printf("%s", satir);

  // konum gostergecinin simdiki yeri:
  printf("konum gostergecinin yeri: %d oldu!\n\n", ftell(ptDosya));

  // konum gostergecini dosya basina gotur:
  printf("konum gostergecisi dosya basina gidiyor...\n");
  rewind(ptDosya);
  printf("konum gostergecinin yeri: %d \n", ftell(ptDosya));

  fclose(ptDosya);
  return 0;
}
