#include <stdio.h>
#include <math.h>
#define baris_x 13

int main() {
    int x[baris_x];
    float data[baris_x][3];
    int init = 0;
    float derajat, rad;
    floatPI = 3.14159f;

    // Inisialisasi array x
    for (int i = 0; i < baris_x; i++) {
        x[i] = init;
        init += 30;
    }

    // Menghitung sin, cos, dan tan untuk setiap sudut
    for (int j = 0; j < baris_x; j++) {
        derajat = x[j]; // Gunakan x[j] sebagai sudut
        for (int k = 0; k < 3; k++) 
        {
            rad = derajat / 180.0 * PI;
            if (k == 0) {
                data[j][k] = sin(rad);
            } else if (k == 1) {
                data[j][k] = cos(rad);
            } else {
                data[j][k] = tan(rad);
            }
        }
    }

    // Menampilkan hasil
    for (int j = 0; j < baris_x; j++) {
        printf("Sudut: %d derajat\n", x[j]);
        printf("Sin: %f\n", data[j][0]);
        printf("Cos: %f\n", data[j][1]);
        printf("Tan: %f\n", data[j][2]);
        printf("\n");
    }

    return 0;
}
