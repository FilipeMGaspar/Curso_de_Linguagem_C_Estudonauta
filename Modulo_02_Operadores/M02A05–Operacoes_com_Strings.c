#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[10];

    nome = "Gustavo";
    printf("%s", nome);
}
