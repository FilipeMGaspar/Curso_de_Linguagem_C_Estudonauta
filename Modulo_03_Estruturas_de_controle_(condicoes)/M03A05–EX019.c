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

    printf("O ano de %d ", ano);
    if(ano % 4 == 0){
        printf("� BISSEXTO");
    }
   // printf("Resto da divis�o de %d por 4 = %d ", ano,(ano%4) );
    printf("\n---------------------------- \n");
}

// Regra utilizada:
/*Para saber se um ano � bissexto basta dividi-lo por 4
e conferir se o resultado � um n�mero exato, por exemplo:

1980/4 = 495 (� bissexto)  resto da divis�o � 0

2011/4 = 502,75 (n�o � bissexto) resto da divis�o n�o � 0
*/


/*
<<< EX019 - Ano Bissexto >>>

Digite um ano qualquer: 2016

O ano de 2016 � BISSEXTO.


Digite um ano qualquer: 2018

O ano de 2018 N�O � BISSEXTO.
*/
