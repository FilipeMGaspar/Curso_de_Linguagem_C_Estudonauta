#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float nota;

    printf("Insira a nota do teste: ");
    fflush(stdin);
    scanf("%f", &nota);

    printf("\nCom a nota de %.1f valores\n");
    printf(" ..: A sua sita��o �: \n");

}

/*
Desafio 2. Crie um programa
Que recebe uma nota (entre 0.0 e 10.0)
Verifique se:
 passou direto,
 ficou de recupera��o
 foi reprovado na mat�ria.

A regra � a seguinte:
Nota 7 ou mais: passou direto
Entre 4 e 7: tem direito de fazer uma prova de recupera��o
Abaixo de 4: reprovado direto
*/
