#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("\t ALUNO(A) \t NOTA \n");
    printf("\t========= \t====== \n ");
    printf("\t ALINE    \t 9.0 \n");
    printf("\t MÁRIO    \t DEZ \n");
    printf("\t SÉRGIO   \t 4.5 \n");
    printf("\t SHIRLEY  \t 7.0 \n");

}

/*
7. Tabela de notas
Escreva um programa que produza a seguinte saída na tela:

ALUNO(A)          NOTA
=========         =====
ALINE              9.0
MÁRIO              DEZ
SÉRGIO             4.5
SHIRLEY            7.0
*/
