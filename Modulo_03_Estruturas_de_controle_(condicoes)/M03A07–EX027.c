#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX027 -  Tr�s valores em ordem >>> \n\n");
    int num1, num2, num3;

    printf("Primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Segundo n�mero: ");
    scanf("%d", &num2);

}

/*
<<< EX027 -  Tr�s valores em ordem >>>

Me diga tr�s n�meros e eu colocarei
eles em ordem para voc�.

Primeiro n�mero: 2
Segundo n�mero: 7
Terceiro n�mero: 1

---------------------
MAIOR: 7
INTERMEDI�RIO: 2
MENOR: 1



*/
