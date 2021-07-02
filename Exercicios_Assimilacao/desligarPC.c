#include <stdio.h>
#include <time.h>

void main(){

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int diaDaSemana = data->tm_wday + 1;


    printf("%d", diaDaSemana);
}
