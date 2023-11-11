#include <stdio.h>
int pjgstr(char str[]);

int main()
{
    char str[100];

    printf("Masukkan string: ");
    fgets(str, 100, stdin);
    int panjangstrng = pjgstr(str);

    printf("Panjang string: %d\n", panjangstrng);

    return 0;
}

int pjgstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}