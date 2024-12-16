// rasgeleBar.c
// 28.08.2003

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <graphics.h>

int main() {
  int driver, mode;
  int errCode=0;
  int sekilSay=0;
  int y1,y2;
  int renk, dolgu, barBoy; // rasgele belirlenecek
  driver=DETECT;

  initgraph(&driver, &mode,"C:\\TC\\BGI");
  errCode=graphresult();

  if (errCode!=0){
	printf("graph error: %d",errCode);
	exit(1);
  }

  srand(time(NULL));
  while(sekilSay<20){

  // rasgele boy uret:
  barBoy=rand() % getmaxx()+ 1;
  // rasgele renk uret:
  renk=rand() % 16 + 1;
  // rasgele dolgu uret:
  dolgu=rand() % 12 + 1;

  setfillstyle(dolgu, renk);
  bar3d(20,sekilSay*20+10,barBoy,sekilSay*20+20,10,1);

  sekilSay++;
}

  getch();
  closegraph();

  return 0;

}
