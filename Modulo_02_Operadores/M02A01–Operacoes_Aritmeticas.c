#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 3;
    int b = 2;
    float r = a / b;

    printf("O resultado e %.2f", r);
}

/*Operadores Aritméticos

+   Soma
-   Subtração
*   Multiplicação
/   Divisão
%   Resto da divisão inteiro

*/
