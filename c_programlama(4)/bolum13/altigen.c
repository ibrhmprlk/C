// altigen.c
// 28.08.2003

#include <graphics.h>
#include <stdio.h>

int main(){
   int driver, mode;
   int errCode=0;
   int arrAltigen[14]={100,100,  65,65, 100,30, 150,30, 
                      185,65, 150,100, 100,100};
   driver=DETECT;

   initgraph(&driver, &mode,"C:\\TC\\BGI");
   errCode=graphresult();

   if (errCode!=0){
     printf("graph error: %d",errCode);
     exit(1);
   }

  // cokgeni ciz:
  drawpoly(7, arrAltigen);

  getch();
  closegraph();

  return 0;
}
