#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int x = 5;
    int y = 3 + ++x;

    printf("Os valores s�o %d e %d \n", x, y);

    printf("\n Segundo exemplo \n");
    int n = 8;
    printf("O valor � %d \n", n);
}

/*
 x = x + 1; ou x += 1 ou x++; posincremento
 y = y - 1; ou y -= 1 ou y-- posdecremento

 ++x preincremento
 --y predecremento
*/
