#include <stdio.h>
int pjgstr(char str[]);

int main()
{
    char str[100];

    printf("Masukkan string: ");
    scanf("%s", str);
    int len = pjgstr(str);

    printf("Panjang string: %d\n", len);

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
