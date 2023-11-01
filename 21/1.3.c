#include <stdio.h>

int main()
{
    int str[100];
    
    printf("Masukkan string fgets: ");
    fgets(str, 100, stdin);
    printf("String yang diinputkan fgets: %s\n", str);

    return 0;
}
