#include <stdio.h>
void copystr(int str[], int copy[]);

int main()
{
    char str[100];
    char copy[100];
    printf("masukan string:");
    fgets(str, 100, stdin);

    copystr(str, copy);

    printf("string asal: %s", str);
    printf("string asal: %s", copy);

    return 0;
}

void copystr(int str[], int copy[])
{
    int i = 0;
    while(str[i]!='\0')
    {
        copy[i] = str[i];
        i++;
    }
}