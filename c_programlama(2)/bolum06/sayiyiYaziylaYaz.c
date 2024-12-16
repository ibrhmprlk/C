// sayiyiYaziylaYaz.c
// 02.04.2003

#include <stdio.h>

void birlikCevirYaz(int);
void onlukCevirYaz(int);

int main() {

  int sayi=0;
  int basamak1=0;
  int basamak2=0;
  int basamak3=0;
  int basamak4=0;

  while(sayi!=-1){
    printf("dort basamakli bir sayi giriniz: ");
    scanf("%d",&sayi);
    if (sayi==-1) break;

    // once basamaklari bul:
    basamak1 = sayi % 10;            // birler basamagi
    basamak2 = (sayi % 100) / 10;    // onlar basamagi
    basamak3 = (sayi % 1000) / 100;  // yuzler basamagi
    basamak4 = sayi / 1000;          // binler basamagi

    // ekrana yaz:
    if (basamak4!=1) birlikCevirYaz(basamak4);
    printf(" bin ");
    if (basamak3!=1) birlikCevirYaz(basamak3);
    if (basamak3!=0) printf(" yuz ");
    onlukCevirYaz(basamak2);
    printf(" ");
    birlikCevirYaz(basamak1);
    printf("\n\n");
  }
  
  return 0;
}


void birlikCevirYaz(int rakam) {
  switch(rakam) {
    case 1:
      printf("bir");  break;
    case 2:
      printf("iki");  break;
    case 3:
      printf("uc");   break;
    case 4:
      printf("dort"); break;
    case 5:
      printf("bes");  break;
    case 6:
      printf("alti"); break;
    case 7:
      printf("yedi"); break;
    case 8:
      printf("sekiz");break;
    case 9:
      printf("dokuz");
  }
}

void onlukCevirYaz(int rakam) {
  switch(rakam) {
    case 1:
      printf("on");     break;
    case 2:
      printf("yirmi");  break;
    case 3:
      printf("otuz");   break;
    case 4:
      printf("kirk");   break;
    case 5:
      printf("elli");   break;
    case 6:
      printf("altmis"); break;
    case 7:
      printf("yetmis"); break;
    case 8:
      printf("seksen"); break;
    case 9:
      printf("doksan"); break;
    default:
      printf("\b");
  }
}
