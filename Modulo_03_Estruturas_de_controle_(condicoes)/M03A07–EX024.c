#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("<<< EX024 - Ordem em dois n�meros >>> \n\n");
    printf("Me diga dois n�meros e eu colocarei \n");
    printf("os dois em ordem crescente. \n\n");

    printf("Primeiro n�mero: ");
    fflush(stdin);

    printf("Segundo n�mero: ");
    fflush(stdin);
}

/*
 <<< EX024 - Ordem em dois n�meros >>>

 Me diga dois n�meros e eu colocarei
 os dois em ordem crescente.

 Primeiro n�mero: 9

 Segundo n�mero: 4

 Os n�meros em ordem s�o 4 e 9.

*/
