#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 4, b = 3;

    printf("%s", (a>b) ? "Verdadeiro" : "Falso");
}
/*

*/
