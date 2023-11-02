#include <stdio.h>
void copystr(int str[],int copy[]);
char str[100];
char copy[100];
int main()
{
    printf("masukan string:");
    fgets(str, 100, stdin);

    copystr(str,copy);

    printf("string asal: %s", str);
    printf("string asal: %s", copy);

    return 0;
}
void copystr(int str[],int copy[])
{
    int banyak_huruf, i, j;
    while (str != '\0')
    {
        if (str == '\n')
        {
            break;
        }
        banyak_huruf++;
    }

    for (i = 0 , j = banyak_huruf; i < j; i++)
    {
        /* code */
    }
}