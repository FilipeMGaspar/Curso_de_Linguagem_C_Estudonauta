#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("<<< EX014 - Operadores de Deslocamento >>> \n\n");
    int num, desloca;

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d", &num);
    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%d", &desloca);
    printf("\n\n");
    printf("----- OPERAÇÕES SHIFT ----- \n");
    printf("Calculando %d >> %d é igual a %d \n", num, desloca, (num >> desloca));
    printf("Calculando %d << %d é igual a %d \n", num, desloca, (num << desloca));
}
/*
<<< EX014 - Operadores de Deslocamento >>>

Digite um número: 18
Digite o deslocamento: 3

----- OPERAÇÕES SHIDT -----
Calculando 18 >> 3 é igual a 2
Calculando 18 << 3 é igual a 144

*/
