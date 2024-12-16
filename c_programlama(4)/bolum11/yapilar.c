// yapilar.c
// 25.06.2003

#include <stdio.h>

int main(){

  // yapi bildirimi:
  struct ogrenci {
    char *isim;
    char *soyisim;
    int numara;
  };

  // yapiyi tanimla :
  struct ogrenci a;

  // degiskene degerler ver:
  a.isim="murat";
  a.soyisim="tasbasi";
  a.numara=1152982;

  // degerleri ekrana yazdir:
  puts(a.isim);
  puts(a.soyisim);
  printf("%d\n",a.numara);

  return 0;
}
