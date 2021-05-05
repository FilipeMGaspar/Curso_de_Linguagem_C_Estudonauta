#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX025 - Servi�o Militar V2.0 >>> \n\n");
    int ano_nascimento;
    int idade;

    //Captura do ano atual
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano_atual = data->tm_year + 1900;

    printf("Atualmente estamios no ano de %d \n", ano_atual);
    printf("\nem que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%d",&ano_nascimento);

    printf("\n-------------------------------------------------------\n");
    idade = ano_atual - ano_nascimento;
    printf("A sua idade atual: %d anos \n",idade);

    printf("-------------------------------------------------------\n");
}

/*
<<< EX025 - Servi�o Militar V2.0 >>>

Atualmente estamos no ano de 2021.
Em que ano voc� nasceu? 1978

------------------------------------
Sua idade atual � 43 anos.
Seu alistamento foi em 1996. J� se +assaram 25 anos.
-------------------------------------------------



Em que ano voc� nasceu? 2010

------------------------------------
Sua idade atual � 11 anos.
Seu alistamento ser� em 2028. Ainda faltam 7 anos.
-------------------------------------------------



Em que ano voc� nasceu? 2003

------------------------------------
Sua idade atual � 18 anos.
Voc� completa 18 anos exectamente em 2021. V� se alistar.
-------------------------------------------------
*/
