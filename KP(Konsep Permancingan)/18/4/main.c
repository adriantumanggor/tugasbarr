#include <stdio.h>

#define MAKS 100 

int main() {
    int arr[MAKS];
    int n;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAKS) {
        printf("Jumlah data tidak valid.\n");
        return 1;
    }

    printf("Masukkan %d data:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Nilai terbesar dalam array adalah: %d\n", max);

    return 0;
}
