// fwriteOrnek.c
// 06.08.2003

#include <stdio.h>

char bellekBolgesi[15];

int main(){

  FILE *ptDosya;
  int i=0;

  // dosyayi ac:
  if((ptDosya=fopen("C:\\fwriteOrnek.txt","a"))==NULL){
    printf("dosya acilamadi!");
    return 0;
  }
  printf("%d",feof(ptDosya));
  printf("yazdiginiz her sey text dosyasina kaydediliyor!\n");
  printf("sonlandirmak icin * giriniz.\n\n");

  do{
    bellekBolgesi[i]=getch();
    putch(bellekBolgesi[i]);
    i++;
    if (i==10){
      if (bellekBolgesi[i-1]==42) break;
      fwrite(bellekBolgesi, sizeof(char), 10, ptDosya);
      i=0;
    }
  }while(bellekBolgesi[i-1]!=42);

  // tamponda kalanlari da ekle:
  fwrite(bellekBolgesi, sizeof(char), i, ptDosya);

  fclose(ptDosya);
  return 0;
}


