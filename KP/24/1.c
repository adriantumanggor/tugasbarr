#include <stdio.h>

int main()
{
    int y, x = 87;
    int *px;
    *px = 20;
    
    printf("Alamat x = %p\n", &x);
    printf("Isi px = %p\n", px);
    printf("nilai px = %d\n", *px);
    printf("Isi x = %d\n", x);
    printf("Nilai yang ditunjuk oleh px = %d\n", *px);
    printf("Nilai y = %d\n", y);
    return 0;
}
