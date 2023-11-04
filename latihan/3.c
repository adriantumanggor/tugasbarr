#include <stdio.h>
int romanToInt(char *s) {
    int result = 0;
    int prevValue = 0;
    int current = 0;    
    while (*s) {

        switch (*s) {
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
        if (current > prevValue) {
            result -= 2 * prevValue;
        }
        
        prevValue = current;
        s++;
    }
        
    return result;
}
int main() {
    char romanNumeral[20];
    printf("Masukkan angka Romawi: ");
    scanf("%s", romanNumeral);

    int arabicNumeral = romanToInt(romanNumeral);

    if (arabicNumeral != -1) {
        printf("Konversi ke bilangan Arab: %d\n", arabicNumeral);
    }

    return 0;
}