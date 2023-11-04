#include <stdio.h>

void input(int[4][4]);
void tampil(int[3][4]);

int main() {
    int nilai[3][4];
    input(nilai);
    printf("no mhs:     rata-rata");
    printf("\n----------------------\n");
    tampil(nilai);
    printf("\n----------------------\n\n");
    return 0;
}

void input(int nilai[4][4]) {
    for (int i = 0; i < 4; i++) {
        printf("no mhs:");
        scanf("%d", &nilai[i][0]);

        for (int j = 1; j < 4; j++) {
            printf("nilai mapel %d:", j);
            scanf("%d", &nilai[i][j]);
        }
    }
}

void tampil(int nilai[4][4]) {
    for (int i = 0; i < 4; i++) {
        float total = 0;

        for (int j = 1; j < 4; j++) {
            total += nilai[i][j];
        }

        float rata_rata = total / 3;

        printf("%d            %.2f\n", nilai[i][0], rata_rata);
    }
}
