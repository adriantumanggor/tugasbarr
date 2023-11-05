#include <stdio.h>

// Deklarasi fungsi f_to_i()
double f_to_i(double feet);

// Deklarasi fungsi i_to_cm()
double i_to_cm(double inches);

// Deklarasi fungsi c_to_m()
double c_to_m(double cm);

int main() {
    double feet, inches, cm, meters;

    // Meminta masukan ukuran dalam satuan kaki (feet)
    printf("Masukkan ukuran dalam satuan kaki (feet): ");
    scanf("%lf", &feet);

    inches = f_to_i(feet);

    cm = i_to_cm(inches);

    meters = c_to_m(cm);

    printf("%.2lf kaki setara dengan %.2lf meter.\n", feet, meters);

    return 0;
}

double f_to_i(double feet) {
    return feet * 12.0; // 1 kaki = 12 inchi
}

double i_to_cm(double inches) {
    return inches * 2.54; // 1 inchi = 2.54 cm
}

double c_to_m(double cm) {
    return cm / 100.0; // 100 cm = 1 meter
}