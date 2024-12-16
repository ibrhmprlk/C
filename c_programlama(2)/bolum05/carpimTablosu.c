// carpimTablosu.c
// 21.03.2003

#include <stdio.h>

int main() {

    int sayi = 0;
    int index=1;
    printf("bir sayi giriniz (1-10):");
    scanf("%d",&sayi);

    if(sayi<1 ||sayi >10) {
      printf("1 - 10 araliginda bir sayi girmelisiniz!");
      return 0;
    }

    while(index<=10) {
      printf("%d x %d = %d\n",sayi,index,sayi*index);
      index++;
    }

	return 0;
}

