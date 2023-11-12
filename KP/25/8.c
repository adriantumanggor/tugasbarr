#include <stdio.h>

int array1[10], array2[10];
int *ip1, *ip2 = array2;
int *akhir = &array1[10];
int main()
{
    for (ip1 = &array1[0]; ip1 < akhir; ip1++)
        *ip2++ = *ip1;
    
    return 0;
}
