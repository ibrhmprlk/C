// ifElseEndifKomutlari.c
// 14.08.2003

#include <stdio.h>
#define MAX 100

int main(){

  #ifdef MAX
    printf("max tanimli!\n");
  #else
    printf("max tanimli degil!\n");
  #endif


  #undef MAX

  #ifdef MAX
    printf("max tanimli!\n");
  #else
    printf("max tanimli degil!\n");
  #endif

  return 0;
}

