#include <stdio.h>
#include <stdbool.h>

struct Date
{
    int hari;
    int bulan;
    int tahun;
};
int hariterakhir(int bulan, int tahun)
{
    if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11)
    {
        return 30;
    }
    else if (bulan == 2)
    {
        if (tahun % 4 == 0 && tahun % 100 != 0 || tahun % 400 == 0)
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        return 30;
    }
}
bool tanggalValid(struct Date hariini)
{
    if (hariini.bulan < 1 || hariini.bulan > 12)
    {
        return false;
    }
    if (hariini.hari < 1 || hariini.hari > hariterakhir(hariini.bulan, hariini.tahun))
    {
        return false;
    }
    return true;
}
struct Date hariEsok(struct Date hariini)
{
    struct Date esok;

    if (hariini.hari < hariterakhir(hariini.bulan, hariini.tahun))
    {
        esok.hari = hariini.hari + 1;
        esok.bulan = hariini.bulan;
        esok.tahun = hariini.tahun;
    }
    else
    {
        esok.hari = 1;
        esok.bulan = hariini.bulan < 12 ? hariini.bulan + 1 : 1;
        esok.tahun = (esok.bulan == 1) ? hariini.tahun + 1 : hariini.tahun;
    }

    return esok;
}
int main()
{
    struct Date today;

    printf("Masukkan Tanggal Bulan Tahun\n");
    scanf("%d %d %d", &today.hari, &today.bulan, &today.tahun);

    if (!tanggalValid(today))
    {
        printf("Tanggal tidak valid\n");
        return 1;
    }

    struct Date tomorrow = hariEsok(today);

    printf("Tanggal sekarang: %d-%d-%d\n", today.hari, today.bulan, today.tahun);
    printf("Tanggal besok: %d-%d-%d\n", tomorrow.hari, tomorrow.bulan, tomorrow.tahun);

    return 0;
}
