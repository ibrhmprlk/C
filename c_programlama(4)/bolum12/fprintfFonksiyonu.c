// fprintfFonksiyonu.c
// 06.08.2003

#include <stdio.h>

int main(){

  FILE *ptDosya;
  char veri[50];
  char dosyaIsmi[20];

  printf("bir cumle giriniz:");
  gets(veri);
  printf("\nbir dosya ismi giriniz:");
  gets(dosyaIsmi);

  // dosyayi ac:
  if((ptDosya=fopen(dosyaIsmi,"w"))==NULL){ // dosya acilamadi
    printf("dosya acilamadi!");
    return 0;
  }

  // veriyi dosyaya yaz:
  fprintf(ptDosya,"%s",veri);

  // dosyayi kapat:
  printf("veriler %s isimli dosyaya yazdirildi!",dosyaIsmi);
  fclose(ptDosya);

  return 0;
}

