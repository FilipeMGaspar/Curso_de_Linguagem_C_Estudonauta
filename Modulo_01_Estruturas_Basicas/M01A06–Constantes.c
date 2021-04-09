#include <stdio.h>
#include <locale.h>

void main(){
    int total = 8; //variavel
    setlocale(LC_ALL,"Portuguese");

    printf("%d",total,"\n");
    total = 10;
    printf("%d", total)
}
