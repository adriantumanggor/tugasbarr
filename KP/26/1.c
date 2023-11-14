#include <stdio.h>

int main()
{
    static char *days[] = {"Sun", "Mon", "Tues", "Wed", "Thu",
                           "Fri", "Sat"};
    int i;
    for (i = 0; i < 6; ++i)
        printf("%s\n", days[i]);
    return 0;
}