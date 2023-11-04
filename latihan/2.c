#include <stdio.h>

// Fungsi binary search
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int middle = left + (right - left) / 2;

        // Jika elemen ditemukan, kembalikan indeksnya
        if (arr[middle] == target) {
            return middle;
        }

        // Jika elemen di tengah lebih kecil dari target, cari di sebelah kanan
        if (arr[middle] < target) {
            left = middle + 1;
        }
        // Jika elemen di tengah lebih besar dari target, cari di sebelah kiri
        else {
            right = middle - 1;
        }
    }

    // Jika elemen tidak ditemukan, kembalikan -1
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Elemen %d ditemukan pada indeks %d.\n", target, result);
    } else {
        printf("Elemen %d tidak ditemukan dalam larik.\n", target);
    }

    return 0;
}
