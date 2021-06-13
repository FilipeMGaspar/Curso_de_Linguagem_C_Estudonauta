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
Exercicio 01 - Maior e menor de Três valores
Faça um programa que receba três inteiros
Diga qual deles é o maior e qual o menor.
*/
