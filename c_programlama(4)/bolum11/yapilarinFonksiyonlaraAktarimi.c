// yapilarinFonksiyonlaraAktarimi.c
// 25.06.2003

#include <stdio.h>

struct sekil {
  int uzunluk;
  int genislik;
  int kareSayisi;
};

void sekilCiz(struct sekil cubuk);

void sekilCiz(struct sekil cubuk){
  // A degiskeni cubuk degiskenine kopyalandi
  // simdi cubuk degiskeni, A degiskeninin ozelliklerini tutar
  // bu ozellikleri ekrana yazdir:
  printf("uzunluk: %d\t\n",cubuk.uzunluk);
  printf("genislik: %d\t\n",cubuk.genislik);
  printf("kare sayisi: %d\t\n",cubuk.kareSayisi);
}

int main(){

  // sekil turunde A isminde bir degisken tanimla:
  struct sekil A;

  // A degiskenine deger ver:
  A.uzunluk=4;
  A.genislik=1;
  A.kareSayisi=4;

  // fonksiyonu cagir
  // A degiskeni cubuk degiskenine kopyalanir
  sekilCiz(A);

  return 0;
}
