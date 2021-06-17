#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int diaAniv, mesAniv, AnoAniv;

    //Captura da data do sistema
    time_t t;
    time(&t);
    struct tm *data;// tm nome do struct data ponteiro para tm
    data = localtime(&t);
    int dia = data->tm_mday;
    int mes = data->tm_mon +1;;
    int ano = data->tm_year + 1900;

    printf("\tData Atual: %d - %d - %d \n\n",dia, mes, ano);
    printf("Indique o Dia [1 - 31] em que nasceu: \n");
    fflush(stdin);
    scanf("%d",&diaAniv);
    printf("Indique o Mês [1 - 12] em que nasceu: \n");
    fflush(stdin);
    scanf("%d", &mesAniv);
    printf("Indique o Ano [%d - %d] \n", (ano -110) ,ano);
}




/*
5. Data Correcta
Escreva um programa
Pergunte o dia, mês e ano do aniversário de uma pessoa
diga se a data é válida ou não.
Caso não seja, diga o motivo.
Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.
*/
