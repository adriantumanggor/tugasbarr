#include <stdio.h>
int main()
{
    int var_x = 273;
    int *ptr1;
    int **ptr2;
    ptr1 = &var_x;
    ptr2 = &ptr1;

    printf("Nilai var_x = *ptr1 = %d\n", *ptr1);
    printf("Nilai var_x = **ptr2 = %d\n\n", **ptr2);
    printf("ptr1 = &var_x = %p\n", ptr1);
    printf("ptr2 = &ptr1 = %p\n", ptr2);
    printf(" &ptr2 = %p\n", &ptr2);
    return 0;
}