#include <stdio.h>

int main()
{
    int result = 0;
    int prevValue = 0;
    int current = 0;
    char x[20] = {'I', 'V', '\0'};
    char *ptr = x;
    while (*ptr)
    {

        switch (*ptr)
        {
        case 'I':
            current = 1;
            break;
        case 'V':
            current = 5;
            break;
        case 'X':
            current = 10;
            break;
        case 'L':
            current = 50;
            break;
        case 'C':
            current = 100;
            break;
        case 'D':
            current = 500;
            break;
        case 'M':
            current = 1000;
            break;
        }

        result += current;
        printf("\napakah ada iterasi : %d\n", result);
        printf("\ncurent brp iki : %d\n", current);
        printf("\npreval: %d\n", prevValue);
        if (current > prevValue)
        {
            result -= 2 * prevValue;
        }
        printf("apakah terkurang : %d\n", result);

        prevValue = current;
        ptr++;
    }
    printf("hasil : %d\n", result);
    return 0;
}