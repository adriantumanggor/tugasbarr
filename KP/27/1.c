#include <stdio.h>
void naikan_nilai(int*, int*);
int main(){
    int a= 3;
    int b= 3;
    printf("semula:\n a=%d\n b=%d\n", a,b);
    naikan_nilai(&a,&b);
    printf("kini:\n a=%d\n b=%d\n", a,b);
}
void naikan_nilai(int*, int*);