#include <stdio.h>
#include <time.h>

void main(){

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int diaDaSemana = data->tm_wday + 1;
    int horaAtual = data->tm_hour;
    int minutosAtual = data->tm_min;

    switch (diaDaSemana){
        case 1:
            printf("Domingo \n");
            break;
        case 2:
            printf("Segunda \n");
            break;
        case 3:
            printf("Terça \n");
            break;
        case 4:
            printf("Quarta \n");
            break;
        case 5:
            printf("Quinta \n");
            break;
        case 6:
            printf("Sexta \n");
            break;
        case 7:
            printf("Sabado \n");
            printf("%d : %d\n", horaAtual, minutosAtual);
            if(horaAtual == 8 && minutosAtual == 30){
                 system("C:\\WINDOWS\\System32\\shutdown /s");
            }
            break;
    }
   // printf("%d", diaDaSemana);
}
