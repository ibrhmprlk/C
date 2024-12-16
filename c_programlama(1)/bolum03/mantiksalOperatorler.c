//mantiksalOperatorler.c
//08.03.2003

# include <stdio.h>

int main() {
  int a=0;
  int b=5;
  int c=-4;

  printf("a nin degeri %d:\n", a);    // 0
  printf("b nin degeri %d:\n", b);    // 5
  printf("c nin degeri %d:\n\n", c);  // -4

  // AND operatoru:
  printf("a VE B nin degeri(a AND b):%d\n", a && b);   // 0
  printf("b VE c nin degeri(b AND c):%d\n\n", b && c); // 1

   // OR operatörü
  printf("a VEYA B nin degeri(a OR b):%d\n", a || b);  // 1
  printf("a VEYA c nin degeri(a OR c):%d\n\n", a || c);// 1

  // NOT operatörü
  printf("a DEGIL in degeri (NOT a): %d\n", !a);   // 1
  printf("c DEGIL in degeri (NOT c): %d\n\n", !c); // 0
  
  return 0;
}
