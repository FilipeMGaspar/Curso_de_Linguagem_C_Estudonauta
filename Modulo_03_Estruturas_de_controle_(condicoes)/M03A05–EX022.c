#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("<<< EX022 - Dá para ver o filme? V_1.0 >>> \n\n");

    printf("====== CINEMA ESTUDONAUTA ====== \n");
}

/*
<<< EX022 - Dá para ver o filme? V 1.0>>>

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
