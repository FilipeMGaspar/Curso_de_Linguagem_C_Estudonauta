#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float nota1, nota2, media;

    printf(" <<< EX015 - Bons alunos merecem parab�ns >>> \n\n");
    printf("Digite a sua primeira nota: ");
    fflush(stdin);
    scanf("%f",&nota1);
    printf("Digite a sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);

}

/*
 <<< EX015 - Bons alunos merecem parab�ns >>>

 Digite a sua primeira nota: 5.5

 Digite a sua segunda nota 9.5

 -----------------------------------------
 MEUS PARAB�NS! A sua m�dia final foi 7.0
 -----------------------------------------

 S� d� parab�ns se a m�dia for maior ou igual a 7
*/
