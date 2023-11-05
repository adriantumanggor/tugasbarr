#include <stdio.h>
void fibonacc(int);
int main()
{
    int n;
    printf("deret fibonaci sampai n\n");
    printf("Masukkan n: ");
    scanf("%d", &n);
    fibonacc(n);
    return 0;
}
void fibonacc(int n)
{
    int sukuawal = 0, sukuakhir = 1, lanjut;
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            lanjut = i;
        }
        else
        {
            lanjut = sukuawal + sukuakhir;
            sukuawal = sukuakhir;
            sukuakhir = lanjut;
        }
        printf("%d ", lanjut);
    }
    printf("\n");
}