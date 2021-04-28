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

    printf("O ano de %d \n", ano);
    printf("Resto da divis�o de %d por 4 = %d ", ano,(ano%4) );
    printf("\n---------------------------- \n");
}

/*
<<< EX019 - Ano Bissexto >>>

Digite um ano qualquer: 2016

O ano de 2016 � BISSEXTO.


Digite um ano qualquer: 2018

O ano de 2018 N�O � BISSEXTO.
*/
