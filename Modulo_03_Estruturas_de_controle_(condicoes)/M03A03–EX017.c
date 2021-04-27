#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int ano_nascimento, idade;

    //Para captura da data do sistema
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int ano_atual = data->tm_year + 1900; //Ano atual que inicial em 1900

    printf("<<< EX017 - Fila de Banco >>> \n\n");

    printf("Em que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%d",&ano_nascimento);
    idade = ano_atual - ano_nascimento;
    printf("\n--------------------------------------------- \n");
    printf("Voc� tem %d anos, certo? \n", idade);
    printf("Seja bem vindo ao Banco Estudonauta \n");
    if(idade >= 65){
        printf("=== ATEN��O! DIRIJA-SE PARA A FILA PREFERENCIAL === \n");
    }
    printf("--------------------------------------------- \n");

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
