#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int horario_filme;
    float dinheiro;
    //Captura da hora do sistema
    time_t t;
    time(&t);
    struct tm *data;
    data= localtime(&t);
    int hora = data->tm_hour;

    printf("<<< EX022 - Dá para ver o filme? V 2.0 >>> \n\n");

    printf("Qual o horário do filme? ");
    fflush(stdin);
    scanf("%d",&horario_filme);


    printf("");

    printf("Quanto dinheiro você tem? ");
    fflush(stdin);
    scanf("%f",&dinheiro);
    printf("\n---------------------------------------- \n");
    printf("Agora são %d horas \n", hora);
}

/*
<<< EX022 - Dá para ver o filme? V 2.0 >>>

========= CINEMA ESTUDONAUTA =========
HORÁRIO DO FILME: 19h - PREÇO DO INGRESSO: R$ 20
-------------------------------------------------

Quanto dinheiro você tem? R$ 10

Agora são 17 horas.
Infelizmente não é possivel comprar o ingresso.



Quanto dinheiro você tem? R$ 50

Agora são 17 horas.
Você consegue comprar o ingresso.

// O programa deve sofrer uma modificação pedindo a hora do filme
// pergunta também quanto dinheiro tem
// O Ingresso so pode ser comprado se tiver o dinheioro e estiver dentro do horário do filme
*/
