#include <stdio.h>

int main()
{
    int a, *b, **c;
    a = 155;
    b = &a;
    c = &b;
    printf("Nilai a = %d atau %d atau %d\n", a, *b, **c);
    printf("a = %p = alamat a di memori\n", a);
    printf("a = %p = alamat a di memori\n", &a);
    printf("b = %p = alamat a di memori\n", b);
    printf("b = %p = alamat a di memori\n", &b);
    printf("c = %p = alamat b di memori\n", c);
    printf("alamat c di memori = %p\n", &c);
    return 0;
}