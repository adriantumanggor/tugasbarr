#include <stdio.h>
#include <string.h>
#define max 10

struct Pesanan
{
    char kode;
    char jenis[10];
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
    printf("%d\n",i);

    nota(daftarHarga, daftarpesanan, i);

    return 0;
}

void nota(struct Harga harga[], struct Pesanan pesanan[], int jumlahPesanan)
{
    printf("\n\nNota Belanja Anda:\n\n");

    printf("\n\t\t\t\tGEROBAK FRIED CHICKS\t\t\t\t\n");
    printf("\n=======================================================================\n");
    printf("No\tJenis Potong\tHarga satuan\tQty\tJumlah harga\n");
    printf("\n=======================================================================\n");
    int totalharga = 0;
    for (int i = 0; i < jumlahPesanan; i++)
    {
        char kode = pesanan[i].kode;
        int jumlah = pesanan[i].jumlah;

        int hargapotong;
        int index;
        int j;
        for (j = 0; j < 3; j++)
        {
            if (harga[j].kode == kode)
            {
                index = j;
                break;
            }
        }
        hargapotong = harga[index].hargaPotong;
        int subtotal = hargapotong * jumlah;
        totalharga += subtotal;

        printf("%d\t%s\t\t%d\t\t%d\t\t%d\n", i + 1, harga[index].jenis, hargapotong, jumlah, subtotal);
    }
    printf("\n=======================================================================\n");
    printf("\n\n");
    printf("Jumlah = %d", totalharga);
    printf("\n\n");
    printf("pajak = %.2f", totalharga * 0.1);
    printf("\n\n");
    printf("Total bayar = %.2f", totalharga * 0.9);
    printf("\n\n");
}
