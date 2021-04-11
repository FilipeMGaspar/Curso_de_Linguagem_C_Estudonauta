#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL));
    int n = rand() % 20 + 1;//Gera entre 0 e 10
    printf("Eu gerei o numero (%d)", n);
}
