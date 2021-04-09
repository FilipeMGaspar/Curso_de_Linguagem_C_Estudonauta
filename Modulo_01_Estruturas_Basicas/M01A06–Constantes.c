#include <stdio.h>
#include <locale.h>

void main(){
    int TOTAL = 8;
    setlocale(LC_ALL,"Portuguese");

    printf("%i",TOTAL);
}
