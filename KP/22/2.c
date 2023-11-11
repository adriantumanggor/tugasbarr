#include <stdio.h>
#include <string.h>

int bandingstr(char[],char[]); // 1 0
int main(){
    char str1[100],str2[100];
    printf("masukan string 1:");
    fgets(str1, 100, stdin);

    printf("masukan string 2:");
    fgets(str2, 100, stdin);
    printf(bandingstr(str1, str2) == 0 ? "Sama" : "Tidak Sama");
    printf("\n");
    return 0;
}
int bandingstr(char str1[], char str2[])
{
    return strcmp(str1,str2);
}