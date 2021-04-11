#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL));
    int n =rand();
    printf("Eu gerei o numero (%d)", n);
}
