#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX025 - Serviço Militar V2.0 >>> \n\n");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int ano_atual = data->tm_year + 1900;

    printf("Atualmente estamios no ano de %d \n", ano_atual);
}

/*

*/
