#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num;

    printf("Digite um valor inteiro: ");
    fflush(stdin);
    scanf("%d", &num);

    printf("\nO número %d é: ", num);
    if(num%2 == 2){
        printf("PAR!");
    }else{
        printf("ÍMPAR");
    }
}

/*
Exercicio 02 - Par ou Ímpar
Escreva um programa que recebe um inteiro e diga se é par ou ímpar.
Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if.
*/
