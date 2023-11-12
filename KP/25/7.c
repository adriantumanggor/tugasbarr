#include <stdio.h>

int main() {
    char *text_pointer = "Good morning!";
    
    for (; *text_pointer != '\0'; ++text_pointer)
        printf("%c", *text_pointer);

    return 0;
}
