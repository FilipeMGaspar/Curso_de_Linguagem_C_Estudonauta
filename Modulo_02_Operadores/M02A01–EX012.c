#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, media;

    printf("Primeira nota: ");
    fflush(stdin);
    scanf("%f",&n1);
}
/*
<<< EX012 - Situação do Aluno >>>

Primeira nota: 5,5
Segunda nota: 8,5

A média do aluno foi 7,0
A sua sitação é: APROVADO
*/
