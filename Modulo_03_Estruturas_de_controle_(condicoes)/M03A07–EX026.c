#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char estado[2];
    printf("<<< EX026 -  Qual � o seu Estado? >>> \n\n");

    printf("Em que estado do Brasil voc� nasceu? ");
    fflush(stdin);
    gets(estado);
    printf("Nascendo em %s voc� � \n", strupr(estado));

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
