#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
   // setlocale(LC_ALL,"Portuguese");

    time_t t;
    time(&t);
    struct tm *data;// tm nome do struct data ponteiro para tm
    data = localtime(&t);

    int d = data->tm_mday; //Dia atual
    int m = data->tm_mon + 1; // MÊs atual
    int a = data->tm_year + 1900; //Ano atual que inicial em 1900
    printf("Data atual: %d - %d - %d \n", d, m, a);
}

/*
tm_mday    Dia do mês  de 1 a 31

tm_mon     Mês de 0 a 11

tm_year    Ano  inicia em 1900 necessita de ser somado

*/
