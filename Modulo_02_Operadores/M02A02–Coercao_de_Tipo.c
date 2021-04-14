#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"Portuguese");

    float x = 5.0;
    int y = 2;
    float z = x / y;

    printf("O resultado e %.1f",z);
}
