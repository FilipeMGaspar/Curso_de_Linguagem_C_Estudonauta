#include <stdio.h>
#include <locale.h>
#include <string.h> //Para poder trabalhar com strings

void main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[10];

    //nome = "Gustavo"; //Gerou um erro
    strcpy(nome, "Gustavo");
    printf("Muito prazer em te conhecer, %s!", nome);
}
