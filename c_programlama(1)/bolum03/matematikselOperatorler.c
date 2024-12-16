//matematikselOperatorler.c
//08.03.2003

# include <stdio.h>

int main() {
    int a=4;
    int b=7;
    int c=9;

    a = a + 1; // a= 5
    a++; // a=6
    ++b; // b=8
    c--; // c=8

    a = b++; // a=8, b=9
    a = ++b; // a=10, b=10

    c = ++a; // a=11, c=11
    c = b--; // b=9, c=10
    c= --b;  // b=8, c=8

    printf("a: %d\n",a); // a=11
    printf("b: %d\n",b); // b=8
    printf("c: %d\n",c); // c=8
    printf("a mod b: %d\n",a%b); // 3
    printf("b mod c: %d\n",b%c); // 0

    return 0;
}
