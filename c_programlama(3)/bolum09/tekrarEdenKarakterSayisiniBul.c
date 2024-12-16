// tekrarEdenKarakterSayisiniBul.c
// 29.05.2003

#include <stdio.h>
#include <ctype.h>

void tabloyuCiz(char *);

  int harfler[26];

void tabloyuCiz(char *chPt){

  int uzunluk=strlen(chPt);
  int i=0;
  char aktifHarf; // cumlede o anda okunan harf

  // hangi harften kac tane oldugunu dizilere yaz
  // dizi indeksi hangi harf oldugunu belirtir,
  // indeks0: a, indeks1: b, ... indeks24: z
  for(i=0;i<uzunluk;i++){
    aktifHarf = tolower(*(chPt+i));
    // harfin ASCII kodundan 97 cikararak, o harfin
    // dizideki indeksini buluyoruz.
    // yani harfler[0] >> a ve harfler[1] >> b gibi
    harfler[aktifHarf-97]++;
  }

  // simdi dizi icindeki degerleri ekrana yazdir.
  // sadece cumlede bulunan harfleri(degeri sifir olmayan) yaz:

  printf("harf\ttekrar\n");
  printf("----\t-----\n\n");
  for(i=0;i<26;i++){
    if(harfler[i]!=0){
      printf("%c\t",i+97);
      printf("%d\n",harfler[i]);
    }
  }
}

int main(){

  char chPt[100];

  puts("Bir cumle giriniz (max 100 karakter):");
  // cumleyi diziye yerlestir:
  gets(chPt);

  // yazdir:
  tabloyuCiz(chPt);
  return 0;
}
