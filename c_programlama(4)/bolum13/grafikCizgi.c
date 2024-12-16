// grafikCizgi.c
// 28.07.2003

#include <graphics.h>
#include <stdio.h>

int main(){
  int driver, mode;
  int errCode=0;
  driver=DETECT;

  initgraph(&driver, &mode,"C:\\TC\\BGI");
  errCode=graphresult();  

  if (errCode!=0){ // hata var mi kontrol et
    printf("graph error: %d",errCode);
    exit(1);  // hata ile cik
  }

  line(0, 40, 200, 40);  // yatay cizgi ciz

  getch();
  closegraph();

  return 0;
}
