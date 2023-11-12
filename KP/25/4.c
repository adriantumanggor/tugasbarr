#include <stdio.h>
#include <string.h>
#define PANJANG 20

char nama1[PANJANG] = "AHMAD";
char nama2[PANJANG] = "RIFDA";
int main()
{
    char namax[PANJANG];
    puts("SEMULA : ");
    printf("nama1 --> %s\n", nama1);
    printf("nama2 --> %s\n", nama2);
    strcpy(namax, nama1);
    strcpy(nama1, nama2);
    strcpy(nama2, namax);
    puts("KINI : ");
    printf("nama1 --> %s\n", nama1);
    printf("nama2 --> %s\n", nama2);
    return 0;
}
