#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30];

    printf("Digite o seu nome dompleto: ");
    gets(nome);

    printf("\n %s", nome);
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
