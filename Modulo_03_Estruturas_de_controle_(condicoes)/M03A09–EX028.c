#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num1, num2;
    char op;

    printf("<<< EX028 - Super Calculadora v1.0 >>> \n\n");
    printf("VALOR 1 = ");
    fflush(stdin);
    scanf("%d", &num1);
    printf("VALOR 2 = ");
    fflush(stdin);
    scanf("%d", &num2);

    printf("\n");
    printf("\t SELECIONE UMA OPERA��O \n");
    printf("=============================================\n");
    printf("\t+\tADI��O\n");
    printf("\t-\tSUBTRA��O\n");
    printf("\t*\tMULTIPLICA��O\n");
    printf("\t/\tDIVIS�O\n");
    printf("=============================================\n");
    printf("\tDigite a sua op��o => ");
    fflush(stdin);
    op = getchar(); //Capturar o caracter

    printf("\n------------------------------------------------------\n");
    switch(op){
        case '+':
            printf("O resultado de %d %c %d � igual a %d \n", num1, op, num2, (num1 + num2));
            break;
        case '-':
            break;
        case '*':
            break;
        case '/':
            break;
        default:

            break;
    }
    printf("------------------------------------------------------\n");
    printf("Obrigado por utilizar a Super Calculadora v1.0 \n\tVOLTE SEMPRE!\n");
}

/*
<<< EX028 - Super Calculadora v1.0 >>>

VALOR 1 = 5
VALOR 2 = 8

===========================
+   ADI��O
-   SUBTRA��O
*   MULTIPLICA��O
/   DIVIS�O
============================
Digite a sua op��o => +

-------------------------------------
O resultado de 5 + 8 � igual a 13.
-------------------------------------

VOLTE SEMPRE!

<<< EX028 - Super Calculadora v1.0 >>>

VALOR 1 = 5
VALOR 2 = 8

===========================
+   ADI��O
-   SUBTRA��O
*   MULTIPLICA��O
/   DIVIS�O
============================
Digite a sua op��o => )

-------------------------------------
N�o foi posss�vel fazer a opera��o. Tente Novamente.
-------------------------------------

VOLTE SEMPRE!
*/
