#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX027 -  Três valores em ordem >>> \n\n");
    int num1, num2, num3;

    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%d", &num1);
    printf("Segundo número: ");
    fflush(stdin);
    scanf("%d", &num2);
    printf("Terceiro número: ");
    fflush(stdin);
    scanf("%d", &num3);

    printf("\n------------------------\n");
    if(num1 > num2 && num2 > num3){
        printf("MAIOR: %d \n", num1);
        printf("INTERMÉDIO: %d \n", num2);
        printf("MENOR: %d \n", num3);
    }
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
