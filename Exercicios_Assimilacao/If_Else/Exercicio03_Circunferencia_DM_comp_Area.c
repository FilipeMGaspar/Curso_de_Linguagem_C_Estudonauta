#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    double raio;

    printf("Raio da circunfer�ncia: ");
    fflush(stdin);
    scanf("%f",&raio);
}

/*
3. Escreva um programa que pergunte o raio de uma circunfer�ncia,
e sem seguida mostre o di�metro, comprimento e
�rea da circunfer�ncia.
*/
