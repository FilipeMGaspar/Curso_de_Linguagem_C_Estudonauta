#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese"); //Define a lingua para Portugês

    printf("<<<< EX001 - Listagem >>>> \n\n");
    printf("Listagem de Alunos \n");
    printf("Nome \t\tNota \n");
    printf("-------------------- \n");
    printf("Ana Beatriz \t8.5 \n");
    printf("Bianca Martins \t9.0 \n");
    printf("Cláudio Sá \t5.5 \n");
    printf("Giovana Silva  \t7.5 \n");

}
/*
<<<< EX001 - Listagem >>>>

Listagem de Alunos
Nome            Nota
-----------------------
Ana Beatriz     8.5
Bianca Martins  9.0
Cláudio Sá      5.5
Giovana Silva   7.5
*/
