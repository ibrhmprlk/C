// asagiYukariKayanYazi.c
// 27.08.2003

#include <conio.h>

int tus;

int main(){

  window(20,5,40,20);
  textbackground(6);
  clrscr();

  cputs("lutfen asagi ve yukari ");
  cputs("ok tuslarini kullanarak ");
  cputs("bu satirlari hareket ettiriniz. ");
  cputs("cikmak icin ESC tusuna basiniz. ");
  gotoxy(1,1);
  while(tus!=27){ // ESC'e basilana kadar
     tus=getch();
     switch(tus){
       case 72:       // yukari ok
         delline();
 	   break;
       case 80:       // asagi ok
         insline();
         break;
     }
   } // while sonu

  return 0;
}
