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

    printf("<<< EX018 - Servi�o Militar V1.0 >>> \n\n");

    printf("Atualmente estamos no ano de %d \n\n", ano_atual);
    printf("Em que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%d",&ano_nascimento);
    idade = ano_atual - ano_nascimento;
    printf("\n-------------------------------------------------- \n");
    printf("A sua idade atual s�o %d anos. \n",idade);
    if(idade >= 18){
       printf("J� fez 18 anos. \nEspero sinceramente que voc� tenha se alistado.\n");
    }
    printf("-------------------------------------------------- \n");

}

/*
<<< EX018 - Servi�o Militar V1.0 >>>

Atualmente estamos no ano de 2021

Em que ano voc� nasceu? 1978

---------------------------------------
Sua idade atual � 40 anos.
J� fez 18 anos. Espero sinceramente que voc� tenha se alistado.

se idade < 18

Em que ano voc� nasceu? 2010

---------------------------------------
Sua idade atual � 11 anos.
Voc� ainda n�o tem 18 anos. N�o pode se alistar.

*/
