/*
    +   加號(Addition)
    -   減號(Subtraction)
    *   乘號(Multiplication)
    /   除號(Division)
    %   餘數(Remainder)
    ++  增加 1(increments by 1)
    --  減少 1(Decrements by 1)
*/
#include <stdio.h>

int main(){

    int i = 4, j = 2;

    printf("i = %d\tj = %d\n", i, j);
    printf("i + j = %d\n", i+j);
    printf("i - j = %d\n", i-j);
    printf("i * j = %d\n", i*j);
    printf("i / j = %d\n", i/j);
    printf("i / j 取餘數 = %d\n", i%j);
    printf("i++ = %d\n", i++);
    printf("i-- = %d\n", i--);

    return 0;
}