#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num1, num2, num3;
    int maior, menor;

    printf("Insira o primeiro valor: ");
    fflush(stdin);
    scanf("%d", &num1);
    printf("Insira o segundo valor: ");
    fflush(stdin);
    scanf("%d", &num2);
    printf("Insira o terceiro valor: ");
    fflush(stdin);
    scanf("%d", &num3);

    if(num1 > num2 && num2> num3){
       maior = num1;
       menor = num3;
    }

    printf("\nMaior: %d \n", maior);
    printf("Menor: %d \n", menor);
}

/*
Exercicio 01 - Maior e menor de Tr�s valores
Fa�a um programa que receba tr�s inteiros
Diga qual deles � o maior e qual o menor.
*/
