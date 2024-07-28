#include <stdio.h>

void Func() {
    printf("function print\n");
}

void FuncSquare(int i) {
    printf("Square function print(i = %d):%d\n", i, i*i);
}

int FuncAdd(int i, int j) {
    int result = i + j;
    return result;
}

int main(){

    Func();

    FuncSquare(5);

    printf("Add function return print(i = 4,j = 5):%d\n", FuncAdd(4, 5));

    printf("after function print\n");

    return 0;
}
