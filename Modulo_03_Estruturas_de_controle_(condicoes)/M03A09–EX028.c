#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num1, num2;

    printf("<<< EX028 - Super Calculadora v1.0 >>> \n\n");
    printf("VALOR 1 = ");
    fflush(stdin);
    scanf("%d", &num1);
    printf("VALOR 2 = ");
    fflush(stdin);
    scanf("%d", &num2);

    printf("\n");
    printf("\t SELECIONE UMA OPERAÇÃO \n");
    printf("=============================================\n");
    printf("\t+\tADIÇÃO\n");
    printf("=============================================\n");

}

/*
<<< EX028 - Super Calculadora v1.0 >>>

VALOR 1 = 5
VALOR 2 = 8

===========================
+   ADIÇÃO
-   SUBTRAÇÃO
*   MULTIPLICAÇÂO
/   DIVISÃO
============================
Digite a sua opção => +

-------------------------------------
O resultado de 5 + 8 é igual a 13.
-------------------------------------

VOLTE SEMPRE!

<<< EX028 - Super Calculadora v1.0 >>>

VALOR 1 = 5
VALOR 2 = 8

===========================
+   ADIÇÃO
-   SUBTRAÇÃO
*   MULTIPLICAÇÂO
/   DIVISÃO
============================
Digite a sua opção => )

-------------------------------------
Não foi posssível fazer a operação. Tente Novamente.
-------------------------------------

VOLTE SEMPRE!
*/
