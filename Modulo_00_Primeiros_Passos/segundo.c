#include <stdio.h>

void main(){
    char nome[10];

    printf("Qual é o seu nome? ");
    scanf("%s", &nome);
    printf("Muito prazer em conhecer-te %s", nome);
}
