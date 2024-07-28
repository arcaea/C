/*
    >   大於(Gather than)
    <   小於(Less than)
    ==  等於(Equal to)
    >=  大於等於(Gather than or Equal to)
    <=  小於等於(Less than or Equal to)
    !=  不等於(Not equal to)
    &&  和(and)
    ||  或(or)
    !   不(Not)

    true起始值    1
    false起始值   0
*/

#include <stdio.h>
#include <stdbool.h>

int main(){

    bool True = true;
    bool False = false;
    int a = 1;
    int b = 2;


    printf("true = %d\tfalse = %d\n", True, False);
    printf("a = %d\tb = %d\n", a, b);
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a != b = %d\n", a != b);
    printf("a==1 && b==1 = %d\n", a==1 && b==1);
    printf("a==1 || b==1 = %d\n", a==1 || b==1);
    printf("!True = %d\n", !True);



    return 0;
}