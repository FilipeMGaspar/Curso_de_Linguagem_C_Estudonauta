#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char estado[2];
    printf("<<< EX026 -  Qual � o seu Estado? >>> \n\n");

    printf("Em que estado do Brasil voc� nasceu? ");
    fflush(stdin);
    gets(estado);
    printf("\nNascendo em %s voc� � ", strupr(estado));
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
        printf("natural da sua cidade, mas ainda n�o sei como te chamar! \n");
    }
}

/*
<<< EX026 -  Qual � o seu Estado? >>>
Em que estado do Brasil Voc� nasceu? RJ

Nascendo em RJ Voc� � CARIOCA


Em que estado do Brasil Voc� nasceu? SP

Nascendo em SP Voc� � PAULISTA


Em que estado do Brasil Voc� nasceu? MG

Nascendo em MG Voc� � MINEIRO


Em que estado do Brasil Voc� nasceu? AL

Nascendo em AL Voc� � ALAGOANO


Em que estado do Brasil Voc� nasceu? RN

Nascendo em RN Voc� � POTIGUAR


Em que estado do Brasil Voc� nasceu? TO

Nascendo em TO Voc� � natural da sua cidade, mas ainda n�o sei como te chamar!

*/
