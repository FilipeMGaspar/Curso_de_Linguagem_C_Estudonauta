#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("<<< EX023 - positivo ou Negativo >>> \n\n");
    printf(" Me diga um n�mero e eu te direi se \n");
    printf("ele � POSITIVO, NEGATIVO ou NULO. \n\n");

    printf("Digite um n�mero: ");
    fflush(stdin);
}

/*
 <<< EX023 - positivo ou Negativo >>>

 Me diga um n�mero e eu te direi se
 ele � POSITIVO, NEGATIVO ou NULO.

 Digite um n�mero
*/
