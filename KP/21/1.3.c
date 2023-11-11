#include <stdio.h>

int main()
{
    int str[10];
    
    printf("Masukkan string fgets: ");
    fgets(str, 10, stdin);
    printf("String yang diinputkan fgets: %s\n", str);
    
    return 0;
}
