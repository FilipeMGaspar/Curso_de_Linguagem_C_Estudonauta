#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("<<< EX014 - Operadores de Deslocamento >>> \n\n");
    int num, desloca;

    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d", &num);
    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%d", &desloca);
    printf("\n\n");
    printf("----- OPERA��ES SHIFT ----- \n");
    printf("Calculando %d >> %d � igual a %d \n", num, desloca, (num >> desloca));
    printf("Calculando %d << %d � igual a %d \n", num, desloca, (num << desloca));
}
/*
<<< EX014 - Operadores de Deslocamento >>>

Digite um n�mero: 18
Digite o deslocamento: 3

----- OPERA��ES SHIDT -----
Calculando 18 >> 3 � igual a 2
Calculando 18 << 3 � igual a 144

*/
