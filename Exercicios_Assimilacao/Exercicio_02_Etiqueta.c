#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    char nomeDaRua[50];

    printf("Digite o seu nome dompleto: ");
    fflush(stdin);
    gets(nome);

    printf("Indique o nome da sua rua: ");
    fflush(stdin);
    gets(nomeDaRua);

    printf("\n%s ", nome);
    printf("\n%s", nomeDaRua);

    printf("\n");
}
/*
2. Etiqueta -
Elabore um programa que pede:
 seu nome, endere�o, CEP e telefone.

Ele deve imprirmir:
 seu nome completo na primeira linha,
 seu endere�o na segunda,
 e o CEP e telefone na terceira.
*/
