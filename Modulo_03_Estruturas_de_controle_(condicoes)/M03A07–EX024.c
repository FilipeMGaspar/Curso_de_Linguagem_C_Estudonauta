#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("<<< EX024 - Ordem em dois números >>> \n\n");
    printf("Me diga dois números e eu colocarei \n");
    printf("os dois em ordem crescente. \n\n");

    printf("Primeiro número: ");
    fflush(stdin);

    printf("Segundo número: ");
    fflush(stdin);
}

/*
 <<< EX024 - Ordem em dois números >>>

 Me diga dois números e eu colocarei
 os dois em ordem crescente.

 Primeiro número: 9

 Segundo número: 4

 Os números em ordem são 4 e 9.

*/
