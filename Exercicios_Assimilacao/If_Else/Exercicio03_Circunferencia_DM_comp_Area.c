#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    double raio;

    printf("Raio da circunferência: ");
    fflush(stdin);
    scanf("%f",&raio);
}

/*
3. Escreva um programa que pergunte o raio de uma circunferência,
e sem seguida mostre o diâmetro, comprimento e
área da circunferência.
*/
