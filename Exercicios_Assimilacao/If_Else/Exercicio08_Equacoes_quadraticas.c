#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float a, b,c;
    float xPos, xNeg;

    printf("Valor de A= ");
    fflush(stdin);
    scanf("%f",&a);
    printf("Valor de B= ");
    fflush(stdin);
    scanf("%f",&b);
    printf("Valor de C = ");
    fflush(stdin);
    scanf("%f",&c);

    if((pow(b,2) - 4 * a *c) >= 0){
        xPos = (-b + sqrt(pow(b,2) - 4 * a * c)) / 2 * a;
        xNeg = (-b - sqrt(pow(b,2) - 4 * a * c)) / 2 * a;
        printf("\nRaiz 1 =  %.2f\n", xPos);
        printf("\nRaiz 2 =  %.2f\n", xNeg);
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
