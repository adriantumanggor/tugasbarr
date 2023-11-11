#include <stdio.h>
int sum(int);
int main()
{
    int nilai;
    printf("masukan nilai:");
    scanf("%d", &nilai);
    int hasil = sum(nilai);
    printf("sum nya adalah: %d", hasil);
    return 0;
}   
int sum(int nilai)
{
    if (nilai == 1)
    {
        return 1;
    }
    else
    {
        return nilai + sum(nilai - 1);
    }
}