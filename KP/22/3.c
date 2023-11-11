#include <stdio.h>
#include <string.h>

#define max 100

int bandingstring2(char[],char[]);
int main()
{
    char string1[max],string2[max];

    printf("non case sensitive\n");

    printf("masukkan stirng 1:");
    fgets(string1, sizeof(string1), stdin);
    
    printf("masukkan stirng 2:");
    fgets(string2, sizeof(string2), stdin);

    if (bandingstring2(string1,string2))
    {
        printf("SAMA\n");
    }
    else
    {
        printf("Tidak sama\n");
    }
    
    return 0;
}

int bandingstring2(char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0' ; i++)
    {
        char char1 = (str1[i]>='A' && str1[i]<='Z') ? str1[i] + 32 : str1[i];
        char char2 = (str2[i]>='A' && str2[i]<='Z') ? str2[i] + 32 : str2[i];

        if (char1!=char2)
        {
            return 0;
        }
    }
    return 1;
}