#include <stdio.h>

int main()
{
    char str[100];

    printf("Masukkan string gets: ");
    gets(str);

    printf("String yang diinputkan gets: %s\n", str);
    return 0;
}
