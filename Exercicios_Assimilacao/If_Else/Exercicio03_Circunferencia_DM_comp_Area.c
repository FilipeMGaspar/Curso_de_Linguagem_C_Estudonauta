#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    float raio;
    float diametro;

    printf("Raio da circunfer�ncia: ");
    fflush(stdin);
    scanf("%f",&raio);

    printf("\nUma circunfer�ncia de raio: %.2f cm tem de:\n", raio);
    diametro = 2.0 * raio;
    printf("  Di�metro: %.2f cm\n", diametro);
    printf("  Comprimento: %.2f cm\n", (2*3.14*raio));
    printf("  �rea: %.2f \n", (3.14*(raio*raio)));
}

/*
3. Escreva um programa que pergunte o raio de uma circunfer�ncia,
e sem seguida mostre o di�metro, comprimento e
�rea da circunfer�ncia.
*/
