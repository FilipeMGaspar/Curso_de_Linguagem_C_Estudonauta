#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num1, num2, num3;

    printf("Insira o primeiro valor: ");
    fflush(stdin);
    scanf("%d", &num1);
    printf("Insira o segundo valor: ");
    fflush(stdin);
    scanf("%d", &num2);
    printf("Insira o terceiro valor: ");
    fflush(stdin);
    scanf("%d", &num3);
}

/*
Exercicio 01 - Maior e menor de Tr�s valores
Fa�a um programa que receba tr�s inteiros
Diga qual deles � o maior e qual o menor.
*/
