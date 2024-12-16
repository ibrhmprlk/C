// ozelKarakterTurleri.c
// 08.03.2003

#include <stdio.h>

int main() {

  char yeniSatir = '\n';
  char alarm = '\a';
  char tab = '\t';

  printf("bu cumle iki satira %cyazilir\n",yeniSatir);
  printf("bu cumle de \niki satir halinde yazilacak");

  printf("\nbu cumlenin basinda ve sonunda yeni satir karakteri var.\n");

  printf("burada bip sesi cikacak!\a \n");
  printf("bir bip sesi de burada%c var! \n",alarm);

  printf("bu cumle \"cift tirnak\" iceriyor! \n");
  printf("bu cumle \\ slash karakteri \\ iceriyor! \n");

  printf("bu cumlenin icinde\t bir tab bosluk var! \n");
  printf("bu cumlenin icinde de%c bir tab bosluk var!"
  ,tab);
  printf("dsfsdfsdsfsd \burada bir slash");

  return 0;
}
