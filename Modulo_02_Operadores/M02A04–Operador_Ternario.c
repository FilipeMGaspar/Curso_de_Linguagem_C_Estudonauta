#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");

    int a = 4, b = 8;
    int c = (a>b) ? (b*2):(a+5);
    printf("O resultado e: %d \n", c);

    float media = 8.5;

    printf("A sua situacao e: %s \n", (media>=7)?"Aprovado":"Reprovado");

    /*
     c = (x>0)?4:8
    variavel = condi��o ?  valor se verdadeiro : valor se falso
    */
}
