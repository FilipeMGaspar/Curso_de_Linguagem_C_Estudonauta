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


    printf("<<< EX018 - Servi�o Militar V1.0 >>> \n\n");

    printf("Atualmente estamos no ano de %d \n\n",);
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
