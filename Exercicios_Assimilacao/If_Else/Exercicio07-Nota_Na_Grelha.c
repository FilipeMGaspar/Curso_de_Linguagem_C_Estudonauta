#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float nota;

    printf("Insira a nota do teste: ");
    fflush(stdin);
    scanf("%f", &nota);

    printf("\nCom a nota de %.1f valores\n", nota);
    printf(" ..: Fica na sitação de: \n");
    if (nota >= 7){
        printf("** Passou direto! \n");
    }else if(nota >= 4){
        printf("-> Prova de recuperação! \n");
    }else if(nota >= 0){
        printf("## Reprovado na Matéria!");
    }
}

/*
Desafio 2. Crie um programa
Que recebe uma nota (entre 0.0 e 10.0)
Verifique se:
 passou direto,
 ficou de recuperação
 foi reprovado na matéria.

A regra é a seguinte:
Nota 7 ou mais: passou direto
Entre 4 e 7: tem direito de fazer uma prova de recuperação
Abaixo de 4: reprovado direto
*/
