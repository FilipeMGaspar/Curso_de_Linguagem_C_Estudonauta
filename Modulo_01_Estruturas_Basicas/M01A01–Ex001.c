#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese"); //Define a lingua para Portugês

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
Cláudio Sá      5.5
Giovana Silva   7.5
*/
