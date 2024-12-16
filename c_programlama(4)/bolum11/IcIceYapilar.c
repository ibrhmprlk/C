// IcIceYapilar.c
// 04.08.2003

#include <stdio.h>

struct adayBilgi {
    char * isim;
    char * soyisim;
    char * lisansEgitim;
    int yas;
    int lesNotu;
    float lisansOrtalamasi;
    int tel;
  };

struct mulakatKayit{
  char * mulakatiYapan;
  char * mulakatTarih;
  struct adayBilgi aday;
  int mulakatNotu;
};

int main(){

  struct mulakatKayit mk01;

  mk01.mulakatiYapan="Banu Gundogan";
  mk01.mulakatTarih="04.09.2003";

  // aday bilgileri:
  mk01.aday.isim="berat";
  mk01.aday.soyisim="tasbasi";
  mk01.aday.lisansEgitim="Hacettepe Univ., Iktisat";
  mk01.aday.yas=21;
  mk01.aday.lesNotu=77;
  mk01.aday.lisansOrtalamasi=2.52;
  mk01.aday.tel=1234567;

  mk01.mulakatNotu=90;

  // daha sonra bu bilgileri istedigimiz gibi kullaniriz:

  printf("mulakati yapan: %s\n", mk01.mulakatiYapan);
  printf("aday isim: %s\n", mk01.aday.isim);
  printf("aday soyisim: %s\n", mk01.aday.soyisim);
  printf("aday les notu: %d\n", mk01.aday.lesNotu);

  return 0;
}
