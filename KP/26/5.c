#include <stdio.h>

int main()
{
    int *i;
    int j = 10, k, m[] = {2, 5};
    int **l;
    i = m;
    i++;
    *i = j;
    j = *i;
    i = &j;
    k = *(&j);
    l = &i;
    return 0;
}