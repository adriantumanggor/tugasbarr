#include <stdio.h>
#include <string.h>
typedef struct
{
    char nama[100];
    int nilaiTugas;
    int nilaiUts;
    int nilaiUas;
} DataMahasiswa;

int jumlahMahasiswa;

void input(DataMahasiswa daftar[], int jumlahdata);
void tampil(DataMahasiswa daftar[], int jumlahdata);
int main()
{
    printf("\n\nMENGHITUNG NILAI AKHIR\nMATKUL KP\n\n");

    printf("Berapa jumlah mahasiswa ? ");
    scanf("%d", &jumlahMahasiswa);

    printf("\nMasukkan Data Mahasiswa\n");

    DataMahasiswa mahasiswa[jumlahMahasiswa];

    input(mahasiswa, jumlahMahasiswa);

    tampil(mahasiswa, jumlahMahasiswa);

    return 0;
}

void input(DataMahasiswa daftar[], int jumlahdata)
{
    for (int i = 0; i < jumlahdata; i++)
    {
        getchar();
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("Nama:");
        fgets(daftar[i].nama, sizeof(daftar[i].nama), stdin);
        if (daftar[i].nama[strlen(daftar[i].nama) - 1] == '\n')
        {
            daftar[i].nama[strlen(daftar[i].nama) - 1] = '\0';
        }
        printf("Nilai tugas:");
        scanf("%d", &daftar[i].nilaiTugas);
        printf("Nilai uts:");
        scanf("%d", &daftar[i].nilaiUts);
        printf("Nilai uas:");
        scanf("%d", &daftar[i].nilaiUas);
    }
}
void tampil(DataMahasiswa daftar[], int jumlahdata)
{
    printf("\n DAFTAR NILAI \n");
    printf("\n MATA KULIAH KP \n");
    printf("\n----------------------------------------------------------------------------\n");
    printf("No\tNama Mahasiswa\t\ttugas\t\tnilaiuts\tnilaiuas\tAkhir\tGrade\n");
    printf("----------------------------------------------------------------------------\n");

    for (int i = 0; i < jumlahdata; i++)
    {
        char grade;
        float total = (daftar[i].nilaiTugas + daftar[i].nilaiUts + daftar[i].nilaiUas) / 3;
        if (total < 50)
        {
            grade = 'E';
        }
        else if (total > 50 && total <= 59)
        {
            grade = 'D';
        }
        else if (total > 59 && total <= 69)
        {
            grade = 'C';
        }
        else if (total > 69 && total <= 79)
        {
            grade = 'B';
        }
        else
        {
            grade = 'A';
        }
        

        printf("%d\t%s\t\t\t%d\t\t%d\t\t%d\t%.2f\t%c\n",
               i + 1,
               daftar[i].nama,
               daftar[i].nilaiTugas,
               daftar[i].nilaiUts,
               daftar[i].nilaiUas,
               total,
               grade);
    }

    printf("\n----------------------------------------------------------------------------\n");

    printf("\nTotal Mahasiswa: %d\n", jumlahMahasiswa);
}
