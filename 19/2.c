#include <stdio.h>
void input(int[4][4]);
void tampil(int[3][4]);
int main()
{
    int nilai[3][4];
    input(nilai);
    printf("no mhs:     rata-rata");
    printf("\n----------------------\n");
    tampil(nilai);
    printf("\n----------------------\n");
    printf("\n");
    return 0;
}
void input(int nilai[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                printf("no mhs:");
                scanf("%d", &nilai[i][j]);
            }
            else
            {
                printf("nilai mapel %d:", j);
                scanf("%d", &nilai[i][j]);
            }
        }
    }
}
void tampil(int nilai[3][4])
{
    for (int i = 0; i < 4; i++)
    {
        float total = 0;
        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                printf("\n%d            ", nilai[i][j]);
            }
            else
            {
                total += nilai[i][j];
                if (j == 3)
                {
                    total /= 3;
                    printf("%.2f           ", total);
                }
            }
        }
    }
}