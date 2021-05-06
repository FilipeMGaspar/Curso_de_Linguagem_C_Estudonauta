#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX027 -  Três valores em ordem >>> \n\n");
    int num1, num2, num3;

    printf("Primeiro número: ");
    scanf("%d", &num1);
    printf("Segundo número: ");
    scanf("%d", &num2);

}

/*
<<< EX027 -  Três valores em ordem >>>

Me diga três números e eu colocarei
eles em ordem para você.

Primeiro número: 2
Segundo número: 7
Terceiro número: 1

---------------------
MAIOR: 7
INTERMEDIÁRIO: 2
MENOR: 1



*/
