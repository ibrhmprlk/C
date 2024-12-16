// kisaltmaBul.c
// 29.05.2003

#include <stdio.h>

void kisaltmaBul(char *);

void kisaltmaBul(char *chPt){

  int i=0;

  while(*(chPt+i)!='\0'){
    if(i==0) putchar(*chPt);
    if (*(chPt+i)==' ') // bosluk bulundu, bir sonraki karakteri yazdir:
        putchar(*(chPt+i+1));
    i++;
  }

}

int main(){

  char chPt[100];

  puts("Bir cumle giriniz (max 100 karakter):");
  // cumleyi diziye yerlestir:
  gets(chPt);

  // kisaltmayi yazdir:
  kisaltmaBul(chPt);

  return 0;
}
