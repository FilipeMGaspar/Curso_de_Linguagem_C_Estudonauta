#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int horario_filme = 19;
    printf("<<< EX022 - D� para ver o filme? V_1.0 >>> \n\n");

    printf("=============== CINEMA ESTUDONAUTA =============== \n");
    printf("HOR�RIO DO FILME: %dh - PRE�O DO INGRESSO: R$ 20 \n", horario_filme);
    printf("-------------------------------------------------- \n");

    printf("Quanto dinheiro voc� tem? R$ ");
}

/*
<<< EX022 - D� para ver o filme? V 1.0>>>

========= CINEMA ESTUDONAUTA =========
HOR�RIO DO FILME: 19h - PRE�O DO INGRESSO: R$ 20
-------------------------------------------------

Quanto dinheiro voc� tem? R$ 10

Agora s�o 17 horas.
Infelizmente n�o � possivel comprar o ingresso.



Quanto dinheiro voc� tem? R$ 50

Agora s�o 17 horas.
Voc� consegue comprar o ingresso.

// O programa deve sofrer uma modifica��o pedindo a hora do filme
// pergunta tamb�m quanto dinheiro tem
// O Ingresso so pode ser comprado se tiver o dinheioro e estiver dentro do hor�rio do filme
*/
