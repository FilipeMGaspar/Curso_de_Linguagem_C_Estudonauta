#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char estado[2];
    printf("<<< EX026 -  Qual é o seu Estado? >>> \n\n");

    printf("Em que estado do Brasil você nasceu? ");
    fflush(stdin);
    gets(estado);
    printf("\nNascendo em %s você é ", strupr(estado));
    if(strcmp(estado, "RJ") == 0){
        printf("CARIOCA \n");
    }else if(strcmp(estado, "SP") == 0){
        printf("PAULISTA \n");
    }else if(strcmp(estado, "MG") == 0){
        printf("MINEIRO \n");
    }else if(strcmp(estado, "AL") == 0){
        printf("ALAGOANO \n");
    }else if(strcmp(estado, "RN") == 0){
        printf("POTIGUAR \n");
    }else{
        printf("natural da sua cidade, mas ainda não sei como te chamar! \n");
    }
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
