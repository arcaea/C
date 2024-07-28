/*
條件 ? True : False;
*/

#include <stdio.h>

int main(){

    int a = 1, b = 2;

    printf("a = %d\tb = %d\n", a, b);

    (a < b) ? printf("a < b") : printf("a >= b");
}