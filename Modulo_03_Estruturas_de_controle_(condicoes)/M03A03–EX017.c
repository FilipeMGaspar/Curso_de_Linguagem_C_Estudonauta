#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int ano_nascimento;

    //Para captura da data do sistema
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime($t);

    printf("<<< EX017 - Fila de Banco >>> \n\n");

    printf("Em que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%d",&ano_nascimento);
}

/*
<<< EX017 - Fila de Banco >>>

Em que ano voc� nasceu? 1978

----------------------------------------
Voc� tem 40 anos, certo?
Seja bem vindo(a) ao Banco Estudonauta!
----------------------------------------

se a idade doi maior ou igual a 65

Em que ano voc� nasceu? 1930

----------------------------------------
Voc� tem 91 anos, certo?
Seja bem vindo(a) ao Banco Estudonauta!

=== ATEN��O! DIRIJA-SE PARA A FILA PREFERENCIAL ===
----------------------------------------

*/
