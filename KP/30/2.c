#include <stdio.h>

int main()
{
    int jumlahdata;
    printf("\n DAFTAR NILAI \n");
    printf("\n MATA KULIAH KP \n");
    printf("\n----------------------------------------------------------------------------\n");
    printf("No\tNama Mahasiswa\t\ttugas\t\tnilaiuts\tnilaiuas\n");
    printf("----------------------------------------------------------------------------\n");

    for (int i = 0; i < jumlahdata; i++)
    {
        printf("%d\t%s\t\t%d\t\t%d\t%d\n");
    }

    printf("\n----------------------------------------------------------------------------\n");

    return 0;
}