#include <stdio.h>
#include <string.h>
#include "strrev.h"

int main() {
    char str[100],copy[100];

    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);

    strcpy(copy,str);
    int len = strlen(str);
    strrev(str);

    printf("Panjang string: %d\n", len);
    printf("String terbalik: %s\n", str);
    printf("String copy: %s\n", copy);

    return 0;
}
