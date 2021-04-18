#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 6;
    a = a +2;
    printf("O valor de a é %d \n", a);
}
