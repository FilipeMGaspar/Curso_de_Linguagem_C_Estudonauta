#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");

    int a = 14, b = 8;
    int c = (a>b) ? (b*2):(a+5);
    printf("O resultado e: %d \n", c);


    /*
     c = (x>0)?4:8
    variavel = condição ?  valor se verdadeiro : valor se falso
    */
}
