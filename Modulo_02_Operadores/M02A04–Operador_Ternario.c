#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");

    int a = 4, b = 8;
    int c = (a>b) ? (b*2):(a+5);
    printf("O resultado e: %d \n", c);

    float media = 5.5;
    char sit[10];

    sit = (media >= 7) ? "Aprovado" : "Reprovado";

    /*
     c = (x>0)?4:8
    variavel = condição ?  valor se verdadeiro : valor se falso
    */
}
