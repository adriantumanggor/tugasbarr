#include <stdio.h>
int pjgstr(char str[]);
void balikstr(char str[], int);
int main()
{
    char str[100];

    printf("Masukkan string: ");
    fgets(str, 100, stdin);

    int len = pjgstr(str);

    printf("Panjang string: %d\n", len);

    balikstr(str, len);

    printf("Kebalikan dari string: %s\n", str);

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

void balikstr(char str[], int len)
{
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
