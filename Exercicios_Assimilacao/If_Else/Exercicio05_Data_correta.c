#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int diaAniv, mesAniv, anoAniv;

    //Captura da data do sistema
    time_t t;
    time(&t);
    struct tm *data;// tm nome do struct data ponteiro para tm
    data = localtime(&t);
    int dia = data->tm_mday;
    int mes = data->tm_mon +1;;
    int ano = data->tm_year + 1900;

    printf("\tData Atual: %d - %d - %d \n\n",dia, mes, ano);
    printf("Indique o Dia [1 - 31] em que nasceu: ");
    fflush(stdin);
    scanf("%d",&diaAniv);
    printf("Indique o M�s [1 - 12] em que nasceu: ");
    fflush(stdin);
    scanf("%d", &mesAniv);
    printf("Indique o Ano [%d - %d] em que nasceu: ", (ano -120) ,ano);
    fflush(stdin);
    scanf("%d",&anoAniv);

    printf("\nA data %d/%d/%d \n", diaAniv, mesAniv, anoAniv);
    if(anoAniv < (ano - 120)){
        printf(" Apresenta erros: ");
        printf("\n  ..: [ ERRO A0365] Ano Inv�lido! \n");
        printf("     ..: � Muito pouco provavel que voc� tenha %d anos\n",(ano - anoAniv));
        printf(" Por favor indique um ano entre %d e %d \n", (ano -120), ano);
    }else if(anoAniv > ano){
        printf("Apresenta erros: ");
        printf("\n  ..: [ ERRO A0365] Ano Inv�lido! \n");
        printf("     ..: Para o ano de %d ainda faltam %d anos \n", anoAniv, (anoAniv - ano));
        printf(" ** Por favor indique um ano entre %d e %d \n", (ano -120), ano);
    }

    if(diaAniv < 1 || diaAniv > 31){
        printf("\n  ..: [ ERRO D031] Dia Inexistente! \n");
        printf("     ..: O dia \" %d \" n�o � v�lido!\n", diaAniv );
        printf(" ** O m�s inicia sempre a dia 1 e tem no m�ximo 31 dias! \n");

    }
}




/*
5. Data Correcta
Escreva um programa
Pergunte o dia, m�s e ano do anivers�rio de uma pessoa
diga se a data � v�lida ou n�o.
Caso n�o seja, diga o motivo.
Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.
*/
