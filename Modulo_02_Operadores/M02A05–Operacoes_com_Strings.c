#include <stdio.h>
#include <locale.h>
#include <string.h> //Para poder trabalhar com strings

void main(){
    setlocale(LC_ALL, "Portuguese");

    char sit[10];
    float media = 8,5;

    strcpy(sit, (media>=7) ? "Aprovado" : "Reprovado");
    printf("%s\n", sit);
}
