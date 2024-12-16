//karsilastirmaOperatorleri.c
//08.03.2003

# include <stdio.h>

int main() {
  int a=2;
  int b=3;
  int c=4;
  int d=2;

  printf("a!=b? %d\n",a!=b);	// sonuc 1
  printf("a!=d? %d\n",a!=d);	// sonuc 0
  printf("a<b?  %d\n",a<b);	// sonuc 1
  printf("b>d?  %d\n",b>d);	// sonuc 1
  printf("a<=d? %d\n",a<=d);	// sonuc 1
  printf("a>=b? %d\n",a>=b);	// sonuc 0
  printf("a<b?  %d\n",a<b);	// sonuc 1

  return 0;
}
