//atamaOperatorleri.c
//08.03.2003

# include <stdio.h>

int main() {
    int a=2;
    int b=3;
    int c=4;

    a += b; // a = 5
    printf("a: %d\n",a);

    c -= a; // c = -1
    printf("c: %d\n",c);

    b*=a;  // b = 15
    printf("b: %d\n",b);

    b/=a;  // b = 3
    printf("b: %d\n",b);

    a %= b; // a = 2
    printf("a: %d\n",a);

    return 0;
}
