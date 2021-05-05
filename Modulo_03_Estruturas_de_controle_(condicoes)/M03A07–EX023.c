#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("<<< EX023 - positivo ou Negativo >>> \n\n");
    printf(" Me diga um número e eu te direi se \n");
    printf("ele é POSITIVO, NEGATIVO ou NULO. \n\n");

    printf("Digite um número: ");
    fflush(stdin);
}

/*
 <<< EX023 - positivo ou Negativo >>>

 Me diga um número e eu te direi se
 ele é POSITIVO, NEGATIVO ou NULO.

 Digite um número
*/
