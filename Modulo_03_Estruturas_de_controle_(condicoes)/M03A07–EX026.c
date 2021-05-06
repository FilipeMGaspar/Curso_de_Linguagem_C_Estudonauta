#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char estado[2];
    printf("<<< EX026 -  Qual é o seu Estado? >>> \n\n");

    printf("Em que estado do Brasil você nasceu? ");
    fflush(stdin);
    gets(estado);
    printf("Nascendo em %s você é \n", strupr(estado));

}

/*
<<< EX026 -  Qual é o seu Estado? >>>
Em que estado do Brasil Você nasceu? RJ

Nascendo em RJ Você é CARIOCA


Em que estado do Brasil Você nasceu? SP

Nascendo em SP Você é PAULISTA


Em que estado do Brasil Você nasceu? MG

Nascendo em MG Você é MINEIRO


Em que estado do Brasil Você nasceu? AL

Nascendo em AL Você é ALAGOANO


Em que estado do Brasil Você nasceu? RN

Nascendo em RN Você é POTIGUAR


Em que estado do Brasil Você nasceu? TO

Nascendo em TO Você é natural da sua cidade, mas ainda não sei como te chamar!

*/
