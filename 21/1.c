#include <stdio.h>

int main() {
  char str[100];

  printf("Masukkan string scanf: ");
  scanf("%s", str);

  printf("String yang diinputkan scanf: %s\n", str);

  printf("Masukkan string gets: ");
  gets(str);

  printf("\n");

  printf("String yang diinputkan gets: %s\n", str);

  printf("Masukkan string fgets: ");
  fgets(str, 100, stdin);

  printf("String yang diinputkan fgets: %s\n", str);

  return 0;
}
    