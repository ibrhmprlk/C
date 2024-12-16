// cerceve.c
// 28.08.2003

#include <graphics.h>
#include <stdio.h>

int main(){
  int driver, mode;
  int errCode=0;
  int icDisFark=8;
  driver=DETECT;

  initgraph(&driver, &mode,"C:\\TC\\BGI");
  errCode=graphresult();

  if (errCode!=0){
 	printf("graph error: %d",errCode);
	exit(1);  
  }


  // dis hatlar
  line(0,0,getmaxx(),0);  // ust
  line(0,0,0,getmaxy());  // sol
  line(0,getmaxy(),getmaxx(),getmaxy());  // alt
  line(getmaxx(),0,getmaxx(),getmaxy());  // sag

  // ic hatlar
  line(icDisFark,icDisFark,getmaxx()-icDisFark,icDisFark);  
  // ust
  line(icDisFark,icDisFark,icDisFark,getmaxy()-icDisFark);  
  // sol
  line(icDisFark,getmaxy()-icDisFark,getmaxx()-
       icDisFark,getmaxy()-icDisFark);  // alt
  line(getmaxx()-icDisFark,icDisFark,getmaxx()-
       icDisFark,getmaxy()-icDisFark);  // sag

  getch();
  closegraph();

  return 0;
}
