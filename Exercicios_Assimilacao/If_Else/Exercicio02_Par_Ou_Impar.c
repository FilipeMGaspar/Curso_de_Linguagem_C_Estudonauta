#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num;

    printf("Digite um valor inteiro: ");
    fflush(stdin);
    scanf("%d", &num);

    printf("\nO n�mero %d �: ", num);
    if(num%2 == 2){
        printf("PAR!");
    }else{
        printf("�MPAR");
    }
}

/*
Exercicio 02 - Par ou �mpar
Escreva um programa que recebe um inteiro e diga se � par ou �mpar.
Use o operador matem�tico % (resto da divis�o ou m�dulo) e o teste condicional if.
*/
