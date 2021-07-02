#include <stdio.h>
#include <time.h>

void main(){

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int diaDaSemana = data->tm_wday + 1;

    switch (diaDaSemana){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda");
            break;
        case 3:
            printf("Terça");
            break;
        case 4:
            printf("Quarta");
            break;
        case 5:
            printf("Quinta");
            break;
        case 6:
            printf("Sexta");
            break;
        case 7:
            printf("Sabado");
            break;
    }
   // printf("%d", diaDaSemana);
}
