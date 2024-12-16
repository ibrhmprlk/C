// fscanfFonksiyonu.c
// 06.08.2003

#include <stdio.h>

int main(){

  FILE *ptDosya;
  char veri[50];
  float sayVeri;


  // dosyayi ac:
  if((ptDosya=fopen("C:\\fscanfDeneme.txt","r"))==NULL){
    printf("dosya acilamadi!");
    return 0;
  }

  // verileri oku:
  fscanf(ptDosya,"%s %f",veri,&sayVeri);

  // okunan verileri ekrana yaz:
  printf("okunan veriler:\n%s\n%7.0f",veri,sayVeri);

  // dosyayi kapat:
  fclose(ptDosya);

  return 0;
}


