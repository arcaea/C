#include <stdio.h>

int GlobalVar =20;

void Func() {
    int Localvar = 10;
    printf("Localvar = %d\n", Localvar);
}


int main(){

    Func();

    printf("GlobalVar = %d\n", GlobalVar);

    return 0;
}
