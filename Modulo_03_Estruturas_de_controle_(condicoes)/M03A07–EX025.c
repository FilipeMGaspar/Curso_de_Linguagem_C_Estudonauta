#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX025 - Serviço Militar V2.0 >>> \n\n");
    int ano_nascimento;
    int idade;

    //Captura do ano atual
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano_atual = data->tm_year + 1900;

    printf("Atualmente estamios no ano de %d \n", ano_atual);
    printf("\nem que ano você nasceu? ");
    fflush(stdin);
    scanf("%d",&ano_nascimento);

    printf("\n-------------------------------------------------------\n");
    idade = ano_atual - ano_nascimento;
    printf("A sua idade atual: %d anos \n",idade);

    printf("-------------------------------------------------------\n");
}

/*
<<< EX025 - Serviço Militar V2.0 >>>

Atualmente estamos no ano de 2021.
Em que ano você nasceu? 1978

------------------------------------
Sua idade atual é 43 anos.
Seu alistamento foi em 1996. Já se +assaram 25 anos.
-------------------------------------------------



Em que ano você nasceu? 2010

------------------------------------
Sua idade atual é 11 anos.
Seu alistamento será em 2028. Ainda faltam 7 anos.
-------------------------------------------------



Em que ano você nasceu? 2003

------------------------------------
Sua idade atual é 18 anos.
Você completa 18 anos exectamente em 2021. Vá se alistar.
-------------------------------------------------
*/
