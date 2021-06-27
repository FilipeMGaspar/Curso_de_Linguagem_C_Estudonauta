#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float a, b,c;
    float x;

    printf("Valor de A= ");
    fflush(stdin);
    scanf("%f",&a);
    printf("VAlor de B= ");

    if((pow(b,2) - 4 * a *c) >= 0){
        printf("Raiz \n");
    }else{
        printf("\nNão tem raiz Real! \n");
    }
   //printf("%.2f", sqrt(25));
}

/*
Escreva um programa
Que pede os coeficientes de uma equação do segundo grau
Exiba as raízes da equação.
*/
