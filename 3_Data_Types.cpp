/*
int     (4 bytes) | %d for printing
double  (8 bytes) | %lf for printing
float   (4 bytes) | %f for printing
char    (1 bytes) | %c for printing
*/

//sizeof %zu for printing

#include <stdio.h>

int main(){

    int i = 10;
    double d = 0.123456;
    float f = 0.123456f;
    char c = 'c';

    printf("int i = %d\t\t\t size of i = %zu\n", i, sizeof(i));
    printf("double d = %lf\t size of i = %zu\n", d, sizeof(d));
    printf("float f = %.2f\t\t size of i = %zu\n", f, sizeof(f));//.2f 表示取到小數點第2位
    printf("char c = %c\t\t\t size of i = %zu\n", c), sizeof(c);

    return 0;
}