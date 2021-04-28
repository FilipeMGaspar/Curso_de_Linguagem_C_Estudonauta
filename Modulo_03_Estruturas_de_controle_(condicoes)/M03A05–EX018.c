#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int ano_nascimento;
    time_t t;
    time(&t);
    struct tm *data; //Ponteiro para tm
    data = localtime(&t);


    printf("<<< EX018 - Serviço Militar V1.0 >>> \n\n");

    printf("Atualmente estamos no ano de %d \n\n",);
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
