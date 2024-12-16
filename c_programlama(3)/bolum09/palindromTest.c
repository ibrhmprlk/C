// palindromTest.c
// 07.05.2003

#include <stdio.h>
#include <ctype.h>

int testPalindrom(char *);

int testPalindrom(char *str) {
  int uzunluk=strlen(str),i=0;
  char *bas, *son;

  bas=str;
  son=str+uzunluk-1;

  // *bas gostericisi ile *son gostericisini gecene kadar bak
  while(bas+i <= son) {
    // sadece ASCII 97-122 ve 65-90 araligini
    // (buyuk-kucuk harfler) dikkate aliyoruz:
    while(tolower(*(bas+i))<97 || tolower(*(bas+i))>122) bas++;
    while(tolower(*(son-i))<97 || tolower(*(son-i))>122) son--;

    if(tolower(*(bas+i))!=tolower(*(son-i))) {  // palindrome degil
      return 0;
    }
    i++;
  }
  return 1;
}


int main(){

  char str[200];
  puts("Bir cumle giriniz (max 200 karakter):");
  // cumleyi diziye yerlestir:
  gets(str);

  if(testPalindrom(str))
    printf("palindrom!!");
  else
    printf("palindrom degil!");

  return 0;
}
