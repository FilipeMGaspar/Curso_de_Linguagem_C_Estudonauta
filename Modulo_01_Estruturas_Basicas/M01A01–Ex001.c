#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese"); //Define a lingua para Portug�s

    printf("Listagem de Alunos \n");
    printf("Nome \tNota \n");
    printf("-------------------- \n")
}
/*
<<<< EX001 - Listagem >>>>

Listagem de Alunos
Nome            Nota
-----------------------
Ana Beatriz     8.5
Bianca Martins  9.0
Cl�udio S�      5.5
Giovana Silva   7.5
*/
