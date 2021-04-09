#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int total = 8; //variavel
    //int IDADEVOTAR = 18;

    printf("%d",total);
    total = 10;
    printf("\n%d", total);
}
