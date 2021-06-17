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
    printf("Indique o Ano [%d - %d] em que nasceu:", (ano -110) ,ano);
    fflush(stdin);
    scanf("%d",&anoAniv);

    if(diaAniv < 1 || diaAniv > 31){
        printf("O dia \" %d \"", diaAniv );
        printf(" n�o � v�lido! indique entre 1 e 31");
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