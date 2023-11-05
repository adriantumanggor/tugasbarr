#include <stdio.h>
#include <math.h>
#define baris_x 13
int main()
{
    int x[baris_x];
    float data[baris_x][3];
    int init = 0;
    float derajat, rad;
    float PI = 3.14159f;
    for (int i = 0; i < 13; i++)
    {
        x[i] = init;
        init += 30;
    }
    for (int j = 0; j < 13; j++)
    {
        derajat = x[j];
        for (int k = 0; k < 3; k++)
        {
            rad = derajat / 180.0 * PI;
            if (k == 0)
            {
                data[j][k] = sin(rad);
            }
            else if (k == 1)
            {
                data[j][k] = cos(rad);
            }
            else
            {
                data[j][k] = tan(rad);
            }
        }
    }

    int j = 0;
    printf("\n      sin             cos             tan\n");
    for (int i = 0; i < baris_x; i++)
    {
        printf("%d      ", x[i]);

        printf("%f      ", data[j][0]);
        printf("%f      ", data[j][1]);
        printf("%f      ", data[j][2]);
        printf("\n");
        j++;
    }
    printf("\n");
    return 0;
}
