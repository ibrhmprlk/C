// program adi
// tarih

#include <stdio.h>

int main(){

  int i=2;
  float f=3.3;

  void *vGosterici;
  int *iGosterici = &i;
  float *fGosterici = &f;

  vGosterici = iGosterici;	// gecerli
  vGosterici = fGosterici;	// gecerli
  vGosterici = &i;		// gecerli
  vGosterici = &f;		// gecerli

  *vGosterici = 13;

  return 0;
}
