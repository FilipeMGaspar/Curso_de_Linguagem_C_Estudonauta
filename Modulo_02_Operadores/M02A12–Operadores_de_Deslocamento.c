#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n = 19 >> 2;
    printf("O resultado é %d \n", n);

}
