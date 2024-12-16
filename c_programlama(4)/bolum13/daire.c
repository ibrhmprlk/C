// daire.c
// 28.08.2003

#include <graphics.h>
#include <stdio.h>

int main(){
  int driver, mode;
  int errCode=0, i;
  driver=DETECT;

  initgraph(&driver, &mode,"C:\\TC\\BGI");
  errCode=graphresult();

  if (errCode!=0)
    printf("graph error: %d",errCode);

    for (i=0;i<=10;i++){
      circle(320,240,i*20);
    }

    getch();
    closegraph();

    return 0;
}
