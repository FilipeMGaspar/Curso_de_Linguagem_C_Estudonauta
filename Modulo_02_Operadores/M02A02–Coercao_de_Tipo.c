#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"Portuguese");

    int x = 5;
    int y = 2;
    int z = x / y;

    printf("O resultado e %d",z);
}
