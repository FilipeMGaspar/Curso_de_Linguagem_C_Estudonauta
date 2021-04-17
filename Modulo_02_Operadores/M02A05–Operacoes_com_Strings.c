#include <stdio.h>
#include <locale.h>
#include <string.h> //Para poder trabalhar com strings

void main(){
    setlocale(LC_ALL, "Portuguese");

    char sit[10];
    float media = 3.5;

    strcpy(sit, (media>=7) ? "Aprovado" : "Reprovado");
    printf("A sitação do aluno é: %s\n", sit);
}
/*
#include <string.h>

 strcpy(variavel, "String"); //copia o conteudo para uma string
 strlen(); tamanho da string
*/
