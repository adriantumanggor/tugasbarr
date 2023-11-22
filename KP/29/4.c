#include <stdio.h>
#include <string.h>
#define max 10

struct Pesanan
{
    char kode;
    int jumlah;
};

struct Harga
{
    char kode;
    char jenis[10];
    int hargaPotong;
};

struct Harga daftarHarga[] =
    {
        {'D', "Dada", 5000},
        {'P', "Paha", 4000},
        {'S', "Sayap", 3000}};

void nota(struct Harga harga[], struct Pesanan pesanan[], int jumlahPesanan);
int main()
{

    printf("\n\nGerobak Fried Chicks\n\n");

    printf("DAFTAR HARGA\n");
    printf("Kode\tJenis\tHarga per potong\n");

    for (int i = 0; i < sizeof(daftarHarga) / sizeof(daftarHarga[0]); i++)
    {
        printf("%c\t%s\t%d\n",
               daftarHarga[i].kode,
               daftarHarga[i].jenis,
               daftarHarga[i].hargaPotong);
    }

    printf("Harga Belum Termasuk Pajak: 10%\n");

    printf("Masukkan Pesanan Anda\n");

    char jawaban;
    int i = 0;

    struct Pesanan daftarpesanan[max];

    do
    {
        printf("\nPesanan ke-%d\n", i + 1);

        printf("Jenis(D/P/S)\t:");
        scanf(" %c", &daftarpesanan[i].kode);
        printf("Jumlah\t:");
        scanf(" %d", &daftarpesanan[i].jumlah);

        printf("Ada lagi kah tuan ? (y/n)");
        scanf(" %c", &jawaban);

        i++;

    } while (jawaban != 'n');

    printf("\n");

    nota(daftarHarga, daftarpesanan, i);

    return 0;
}

void nota(struct Harga harga[], struct Pesanan pesanan[], int jumlahPesanan)
{
    float totalHarga = 0;

    printf("\n\nNOTA PEMBELIAN\n");
    printf("--------------------------------------------------\n");
    printf("No\tJenis\t\tJumlah\tHarga\tTotal\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < jumlahPesanan; i++)
    {
        char kode = pesanan[i].kode;
        int jumlah = pesanan[i].jumlah;

        int index;
        for (int j = 0; j < sizeof(daftarHarga) / sizeof(daftarHarga[0]); j++)
        {
            if (harga[j].kode == kode)
            {
                index = j;
                break;
            }
        }

        int hargaPotong = harga[index].hargaPotong;
        int total = jumlah * hargaPotong;

        printf("%d\t%s\t\t%d\t%d\t%d\n", i + 1, harga[index].jenis, jumlah, hargaPotong, total);
        totalHarga += total;
    }

    float pajak = 0.1 * totalHarga;
    float totalHargaTermasukPajak = totalHarga + pajak;

    printf("--------------------------------------------------\n");
    printf("\t\t\t\tTotal: %.2f\n", totalHarga);
    printf("\t\t\t\tPajak (10%%): %.2f\n", pajak);
    printf("\t\t\t\tTotal (Termasuk Pajak): %.2f\n", totalHargaTermasukPajak);
    printf("--------------------------------------------------\n");

    printf("\nTerima kasih atas pesanannya!\n");
}
