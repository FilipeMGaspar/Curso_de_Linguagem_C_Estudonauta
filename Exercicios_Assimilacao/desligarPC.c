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
    int horaDeFecho, minutoFecho;

    switch (diaDaSemana){
        case 1:
            printf("Domingo \n");
            horaDeFecho = 8;
            minutoFecho = 3;
            break;
        case 2:
            printf("Segunda \n");
            horaDeFecho = 22;
            minutoFecho = 3;
            break;
        case 3:
            printf("Terça \n");
            horaDeFecho = 22;
            minutoFecho = 3;
            break;
        case 4:
            printf("Quarta \n");
            horaDeFecho = 22;
            minutoFecho = 3;
            break;
        case 5:
            printf("Quinta \n");
            horaDeFecho = 22;
            minutoFecho = 3;
            break;
        case 6:
            printf("Sexta \n");
            horaDeFecho = 23;
            minutoFecho = 3;
            break;
        case 7:
            printf("Sabado \n");
            printf("%d : %d\n", horaAtual, minutosAtual);
            horaDeFecho = 8;
            minutoFecho = 3;
            break;
    }

     if(horaAtual >= horaDeFecho && minutosAtual >= minutoFecho){
                 system("shutdown -s -t 30");
     }
}
