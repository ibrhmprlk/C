// rasgeleRenkliDikdortgenler.c
// 28.08.2003

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <graphics.h>

int main() {
  int driver, mode;
  int errCode=0;
  int sekilSay=0;
  int bekleSure=100;	  // cizim arasi bekleme suresi
  int x1,x2,y1,y2, renk; // rasgele belirlenecek
  driver=DETECT;

  initgraph(&driver, &mode,"C:\\TC\\BGI");
  errCode=graphresult();

  if (errCode!=0){
	printf("graph error: %d",errCode);
	exit(1);  
  }

  srand(time(NULL));
  while(sekilSay<100){

   // rasgele sayi uret(x1, x2):
   x1=rand() % getmaxx() + 1;
   x2=rand() % getmaxx() + 1;

   // rasgele sayi uret(y1, y2):
   y1=rand() % getmaxy() + 1;
   y2=rand() % getmaxy() + 1;
	
  // rasgele renk uret:
  renk=rand() % 16 + 1;

  // sekli ciz:
  setcolor(renk);
  rectangle(x1,y1,x2,y2);
  delay(bekleSure); // bir sure bekle
  sekilSay++;
 }

  getch();
  closegraph();

  return 0;
}
