#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int ano_nascimento;
    int idade;
    //Capturar data e hora do sistema
    time_t t;
    time(&t);
    struct tm *data; //Ponteiro para tm
    data = localtime(&t);
    int ano_atual = data->tm_year + 1900; //Captura do ano atual

    printf("<<< EX018 - Serviço Militar V1.0 >>> \n\n");

    printf("Atualmente estamos no ano de %d \n\n", ano_atual);
    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%d",&ano_nascimento);
    idade = ano_atual - ano_nascimento;
    printf("\n-------------------------------------------------- \n");
    printf("A sua idade atual são %d anos. \n",idade);
    if(idade >= 18){
       printf("Já fez 18 anos. \nEspero sinceramente que você tenha se alistado.\n");
    }
    printf("-------------------------------------------------- \n");

}

/*
<<< EX018 - Serviço Militar V1.0 >>>

Atualmente estamos no ano de 2021

Em que ano você nasceu? 1978

---------------------------------------
Sua idade atual é 40 anos.
Já fez 18 anos. Espero sinceramente que você tenha se alistado.

se idade < 18

Em que ano você nasceu? 2010

---------------------------------------
Sua idade atual é 11 anos.
Você ainda não tem 18 anos. Não pode se alistar.

*/
