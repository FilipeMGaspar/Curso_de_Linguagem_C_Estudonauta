#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");

    int x = 5;
    int y = 2;
    float z = (float)x / (float)y;

    printf("O resultado e %.1f",z);
}
