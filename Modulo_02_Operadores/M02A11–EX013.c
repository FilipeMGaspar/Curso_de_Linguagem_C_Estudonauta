#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX013 - Operadores Bitwise >>> \n\n");

    int n1, n2;
    printf("Digite o primeiro número: ");
    fflush(stdin);
    scanf("%d",$n1);
    printf("Digite o segundo número: ");
    fflush(stdin);
    scanf("%d",$n2);
}

/*
<<< EX013 - Operadores Bitwise >>>

Digite o primeiro valor: 25
Digite o segundo valor: 12


------------- OPERAÇÔES BITWISE --------------
Calculado 25 & 12 é igual a 8
Calculado 25 | 12 é igual a 29
Calculado 25 ^ 12 é igual a 21

*/
