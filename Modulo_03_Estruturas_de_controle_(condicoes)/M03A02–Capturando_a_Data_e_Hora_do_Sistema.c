#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    time_t t;
    time(&t);
    struct tm*data;// tm nome do struct data ponteiro para data
    data = localtime(&t);

}
