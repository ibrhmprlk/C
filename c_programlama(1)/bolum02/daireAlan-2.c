

#include <stdio.h>

int main() {

	double pi = 3.1415;
	double yaricap=0;

	printf("lutfen dairenin yaricapini giriniz:");
  scanf("%lf",&yaricap);
  printf("dairenin alani: ");
	printf("%f", pi * yaricap * yaricap);
	return 0;
}

