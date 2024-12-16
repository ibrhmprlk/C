// iciceDonguDiyezler.c
// 30.03.2003

#include <stdio.h>

int main() {

  int diyezSayisi=0;
  int i=0;
  int j=0;

  printf("diyez sayisini giriniz: ");
  scanf("%d",&diyezSayisi);
  for(i=0;i<diyezSayisi;i++) {
   for(j=0;j<=i;j++) {
    printf("#");
   } // icteki for
   printf("\n");
  } // distaki for

  return 0;
}

