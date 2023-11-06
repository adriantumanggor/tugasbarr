#include <stdio.h>
#include <string.h>
#include "strrev.h"

int main() {
    char str[100],copy[100];

    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);

    strrev(str);
    int len = strlen(str);
    

    printf("Panjang string: %d\n", len);
    printf("String terbalik: %s\n", str);

    return 0;
}
