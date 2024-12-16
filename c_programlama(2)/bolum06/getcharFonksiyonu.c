// getcharFonksiyonu.c
// 02.04.2003

#include <stdio.h>

int main() {

  char tus=0;
  printf("%bir tusa basiniz...\n");
  tus=getch();
  printf("%c tusuna bastiniz.\n",tus);
  printf("tusun ASCII kodu: %d",tus);
  return 0;
}

