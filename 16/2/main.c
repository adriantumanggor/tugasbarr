#include <stdio.h>

double masukan(int n);

double average(int n, double total);

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    double total = masukan(n); 
    double avg = average(n, total);  

    printf("Rata-rata dari seluruh data adalah: %.2lf\n", avg);

    return 0;
}

double masukan(int n) {
    double total = 0.0;
    for (int i = 1; i <= n; i++) {
        double data;
        printf("Masukkan data ke-%d: ", i);
        scanf("%lf", &data);
        total += data;
    }
    return total;
}

// Definisi fungsi average()
double average(int n, double total) {
    return total / n;
}
