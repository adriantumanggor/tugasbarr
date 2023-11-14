#include <stdio.h>
#include <string.h>

int main() {
    char str[100],str2[100];

    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);

    printf("Masukkan string: ");
    fgets(str2, sizeof(str2), stdin);
    
    printf(strcmp(str,str2) == 0 ? "sama" : "tidak");
    printf("\n");
    printf(strcmpi(str,str2) == 0 ? "sama" : "tidak");

    return 0;
}
