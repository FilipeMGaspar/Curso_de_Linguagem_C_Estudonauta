#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    time_t t;
    time(&t);
    struct tm *data;// tm nome do struct data ponteiro para tm
    data = localtime(&t);

    int dia;
    int mes = =data->tm_mon +1;;
    int ano;
    printf("%d \n",mes);
}

/*
5. Data Correcta
Escreva um programa
Pergunte o dia, mês e ano do aniversário de uma pessoa
diga se a data é válida ou não.
Caso não seja, diga o motivo.
Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.
*/
