#include <stdio.h>
struct DataMahasiswa
{
    char nama[100];
    int nilaiTugas;
    int nilaiUts;
    int nilaiUas;
};

int main(){
    int jumlahMahasiswa;
    printf("\n\nMENGHITUNG NILAI AKHIR\nMATKUL KP\n\n");
    
    printf("Berapa jumlah mahasiswa ? ");
    scanf("%d", &jumlahMahasiswa);

    printf("\nMasukkan Data Mahasiswa\n");

    struct DataMahasiswa mahasiswa[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        printf("Mahasiswa ke-%d", i + 1);
        printf("Nama:");
        fgets(mahasiswa[i].nama, sizeof(mahasiswa[i].nama), stdin);

    }
    printf("\n%s\n", mahasiswa[0].nama);
    return 0;
}