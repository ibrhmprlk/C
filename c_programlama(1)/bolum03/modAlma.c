//modAlma.c
//08.03.2003

# include <stdio.h>

int main() {
  int sayi;
  int bolum;
  int kalan;
  int toplam = 0;

  printf("4 basamakli bir sayi giriniz:");
  scanf("%d",&sayi);    // sayiyi oku

  bolum = sayi / 1000;  // bine bolunce 4. basamak bulunur
  toplam += bolum;      // 4. basamagi toplama ekle
  kalan = sayi % 1000;  // bine bolumden kalani bul

  bolum = kalan / 100;  // yuze bolunce 3. basamak bulunur
  toplam += bolum;      // 3. basamagi toplama ekle
  kalan = kalan % 100;  // yuze bolumden kalani bul

  bolum = kalan /10;    // ona bolunce 2. basamak bulunur
  toplam+= bolum;       // 2. basamagi toplama ekle
  kalan = kalan % 10;   // kalani bul (1. basamak)
  toplam += kalan;      // kalani toplama ekle

  // toplami ekrana yaz
  printf("basamaklarin sayi degerleri toplami: %d",toplam);
  return 0;
}
