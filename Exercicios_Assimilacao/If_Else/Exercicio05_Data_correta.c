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
Pergunte o dia, m�s e ano do anivers�rio de uma pessoa
diga se a data � v�lida ou n�o.
Caso n�o seja, diga o motivo.
Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.
*/
