#include <stdio.h>
#include <string.h>
int pjgstr(char str[]) {
  int i = 0;
  while (str[i] != '\n') {
    i++;
  }
  return i;
}

void balikstr(char str[]) {
  int i, j;

  for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}

int main() {
  char str[100];

  printf("Masukkan string fgets: ");
  fgets(str, 100, stdin);

  int len = pjgstr(str);

  printf("Panjang string: %d\n", len);

  balikstr(str);

  printf("Kebalikan dari string: %s\n", str);

  return 0;
}
