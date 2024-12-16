// yasam.c
// 25.06.2003

#include <stdio.h>

int main(){

  struct tarih {
    int gun;
    int ay;
    int yil;
  };

  struct tarih dogum;
  struct tarih bugun;

  printf("dogum tarihinizi giriniz(gun ay yil):");
  scanf("%d %d %d",&dogum.gun,&dogum.ay,&dogum.yil);

  printf("bugunun tarihini giriniz(gun ay yil):");
  scanf("%d %d %d",&bugun.gun,&bugun.ay,&bugun.yil);


  if(dogum.gun>bugun.gun) {
    bugun.gun+=30;
    bugun.ay-=1;
  }

  if(dogum.ay>bugun.ay) {
    bugun.ay+=12;
    bugun.yil-=1;
  }

  printf("\nbugune kadar, \n");
  printf("%d gun,\n",bugun.gun - dogum.gun);
  printf("%d ay,\n",bugun.ay - dogum.ay);
  printf("%d yil,\n",bugun.yil - dogum.yil);
  printf("yasadiniz!\n\n");
  printf("daha nice mutlu yillara!!\n");

  return 0;
}
