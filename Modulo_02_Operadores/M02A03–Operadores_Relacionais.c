#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 8;
    int b = 6;
    int c = (a>=b);

    printf("O resultado e %d \n", c);
}
/*
true = 1
false = 0
*/
