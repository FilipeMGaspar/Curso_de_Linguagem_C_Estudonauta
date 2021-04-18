#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int n = 8;
    n--;
    printf("O resultado é %d \n", n);
}

/*
 x = x + 1; ou x += 1 ou x++;
 y = y - 1; ou y -= 1 ou y--
*/
