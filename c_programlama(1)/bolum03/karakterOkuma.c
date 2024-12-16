//karakterOkuma.c
//08.03.2003

# include <stdio.h>

int main() {
  char karakter;
  printf("bir karakter girerek ENTER tusuna basiniz:");
  scanf("%c", &karakter); // karakteri oku

  // karakterin ASCII karsiligini yaz:
  printf("%c kar. ASCII karsiligi: %d",karakter, karakter);
  return 0;
}
