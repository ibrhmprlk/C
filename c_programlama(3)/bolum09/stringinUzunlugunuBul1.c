// stringinUzunlugunuBul1.c
// 28.05.2003

#include <stdio.h>

int uzunlugunuBul(char *);

int uzunlugunuBul(char *chPt){
  int i=0;

  while (*(chPt+i)!='\0'){  // NULL bulana kadar devam et:
    i++;
  }

  return i;
}

int main(){

  char *chPt="zaman hanci, bulut yolcu...";
  char dizi[]="baaaah!";
  int uzunluk=0;

  uzunluk=uzunlugunuBul(chPt);
  printf("stringin uzunlugu: %d\n", uzunluk);
  puts(chPt);
  puts(dizi);

  return 0;
}
