#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    char nomeDaRua[50];
    int codPostal;
    int nrTelef;

    printf("Digite o seu nome dompleto: ");
    fflush(stdin);
    gets(nome);

    printf("Indique o nome da sua rua: ");
    fflush(stdin);
    gets(nomeDaRua);

    printf("Indique o código postal: ");
    fflush(stdin);
    scanf("%d", &codPostal);

    printf("Indique o seu telefone: ");
    fflush(stdin);
    scanf("%d", nrTelef);

    printf("\n%s ", nome);
    printf("\n%s ", nomeDaRua);
    printf("\n%d \t Telef: %d", codPostal, nrTelef);

    printf("\n");
}
/*
2. Etiqueta -
Elabore um programa que pede:
 seu nome, endereço, CEP e telefone.

Ele deve imprirmir:
 seu nome completo na primeira linha,
 seu endereço na segunda,
 e o CEP e telefone na terceira.
*/
