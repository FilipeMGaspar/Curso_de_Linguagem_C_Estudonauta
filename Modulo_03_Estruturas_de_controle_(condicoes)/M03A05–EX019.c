#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int ano;

    printf("<<< EX019 - Ano Bissexto >>> \n\n");
    printf("Digitre um ano qualquer: ");
    fflush(stdin);
    scanf("%d",&ano);
    printf("\n---------------------------- \n");
    printf("O nao de %d ", ano);
}

/*
<<< EX019 - Ano Bissexto >>>

Digite um ano qualquer: 2016

O ano de 2016 é BISSEXTO.


Digite um ano qualquer: 2018

O ano de 2018 NÃO É BISSEXTO.
*/
