// freadOrnek.c
// 06.08.2003

#include <stdio.h>

char bellekBolgesi1[200];

int main(){

  FILE *ptDosya;

  // dosyayi ac:
  if((ptDosya=fopen("C:\\konumGostergecOrnek.txt","r"))==NULL){
    printf("dosya acilamadi!");
    return 0;
  }

  fread(bellekBolgesi1, sizeof(double), 10, ptDosya);
  puts(bellekBolgesi1);

  return 0;
}
