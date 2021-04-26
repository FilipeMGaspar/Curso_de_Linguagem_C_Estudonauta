#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    time_t t;
    time(&t);
    struct tm *data;// tm nome do struct data ponteiro para tm
    data = localtime(&t);

    int d = data->tm_mday; //Dia atual
    int m = data->tm_mon + 1; // ME^s atual
    printf("Data atual: %d - %d \n", d, m);
}
