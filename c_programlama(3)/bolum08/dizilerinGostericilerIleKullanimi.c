// dizilerinGostericilerIleKullanimi.c
// 13.05.2003

#include <stdio.h>

int main(){

  // dizileri tanimla:
  char chDizi[4] = {'a', 'b', 'c', 'd'};
  int intDizi[4] = {1,2,3,4};
  int i=0;

  // chDizi dizisini gostericilerle ekrana yazdir:
  printf("chDizi elemanlarinin icerigi:\n----------\n");
  for(i=0;i<4;i++){
    printf("chDizi(%d): %c\n",i,*(chDizi +i));
  }

  // intDizi dizisini gostericilerle ekrana yazdir:
  printf("\nintDizi elemanlarinin icerigi:\n----------\n");
  for(i=0;i<4;i++){
    printf("intDizi(%d): %d\n",i,*(intDizi +i));
  }


  // chDizi dizisinin elemanlarinin adreslerini yazdir:
  printf("\nchDizi elemanlarinin adresleri:\n----------\n");
  for(i=0;i<4;i++){
    printf("&chDizi(%d): %X\n",i,chDizi +i);
  }

  // intDizi dizisinin elemanlarinin adreslerini yazdir:
  printf("\nintDizi elemanlarinin adresleri:\n----------\n");
  for(i=0;i<4;i++){
    printf("&intDizi(%d): %X\n",i,intDizi +i);
  }

 return 0;
}
