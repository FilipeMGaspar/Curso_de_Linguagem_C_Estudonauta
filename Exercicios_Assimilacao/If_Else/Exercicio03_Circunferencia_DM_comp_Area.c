#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float raio;
    float diametro;

    printf("Raio da circunferência: ");
    fflush(stdin);
    scanf("%f",&raio);

    printf("\nUma circunferência de raio: %.2f cm tem de:\n", raio);
    diametro = 2.0 * raio;
    printf("  Diâmetro: %.2f cm\n", diametro);
    printf("  Comprimento: %.2f cm\n", (2*3.14*raio));
    printf("  Área: %.2f \n", (3.14*(raio*raio)));
}

/*
3. Escreva um programa que pergunte o raio de uma circunferência,
e sem seguida mostre o diâmetro, comprimento e
área da circunferência.
*/
